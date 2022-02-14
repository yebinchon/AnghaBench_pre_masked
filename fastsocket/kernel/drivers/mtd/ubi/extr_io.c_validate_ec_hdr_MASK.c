
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ubi_ec_hdr {scalar_t__ version; int data_offset; int vid_hdr_offset; int ec; } ;
struct ubi_device {int vid_hdr_offset; int leb_start; } ;


 long long VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 long long FUNC_1 (int ) ;
 int FUNC_2 (struct ubi_ec_hdr const*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,...) ;

__attribute__((used)) static int FUNC_5(const struct ubi_device *VAR_2,
      const struct ubi_ec_hdr *VAR_3)
{
 long long VAR_4;
 int VAR_5, VAR_6;

 VAR_4 = FUNC_1(VAR_3->ec);
 VAR_5 = FUNC_0(VAR_3->vid_hdr_offset);
 VAR_6 = FUNC_0(VAR_3->data_offset);

 if (VAR_3->version != VAR_1) {
  FUNC_4("node with incompatible UBI version found: "
   "this UBI version is %d, image version is %d",
   VAR_1, (int)VAR_3->version);
  goto bad;
 }

 if (VAR_5 != VAR_2->vid_hdr_offset) {
  FUNC_4("bad VID header offset %d, expected %d",
   VAR_5, VAR_2->vid_hdr_offset);
  goto bad;
 }

 if (VAR_6 != VAR_2->leb_start) {
  FUNC_4("bad data offset %d, expected %d",
   VAR_6, VAR_2->leb_start);
  goto bad;
 }

 if (VAR_4 < 0 || VAR_4 > VAR_0) {
  FUNC_4("bad erase counter %lld", VAR_4);
  goto bad;
 }

 return 0;

bad:
 FUNC_4("bad EC header");
 FUNC_2(VAR_3);
 FUNC_3();
 return 1;
}
