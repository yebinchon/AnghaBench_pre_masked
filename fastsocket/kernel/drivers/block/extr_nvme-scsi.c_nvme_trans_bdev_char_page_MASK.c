
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sg_io_hdr {int dummy; } ;
struct nvme_ns {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int*) ;
 int* FUNC_1 (int ,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (struct sg_io_hdr*,int*,int) ;

__attribute__((used)) static int FUNC_4(struct nvme_ns *VAR_5, struct sg_io_hdr *VAR_6,
     int VAR_7)
{
 u8 *VAR_8;
 int VAR_9 = VAR_4;
 int VAR_10;

 VAR_8 = FUNC_1(VAR_1, VAR_2);
 if (VAR_8 == ((void*)0)) {
  VAR_9 = -VAR_0;
  goto out_mem;
 }

 VAR_8[1] = VAR_3;
 VAR_8[2] = 0x00;
 VAR_8[3] = 0x3C;
 VAR_8[4] = 0x00;
 VAR_8[5] = 0x01;
 VAR_8[6] = 0x00;

 VAR_10 = FUNC_2(VAR_7, VAR_1);
 VAR_9 = FUNC_3(VAR_6, VAR_8, VAR_10);

 FUNC_0(VAR_8);
 out_mem:
 return VAR_9;
}
