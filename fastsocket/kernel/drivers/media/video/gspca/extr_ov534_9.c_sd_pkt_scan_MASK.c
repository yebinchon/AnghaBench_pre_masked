
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sd {int last_pts; int last_fid; } ;
struct gspca_dev {scalar_t__ last_packet_type; } ;
typedef int __u32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,char*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct gspca_dev*,scalar_t__,int*,int) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static void FUNC_3(struct gspca_dev *VAR_9,
   u8 *VAR_10, int VAR_11)
{
 struct sd *VAR_12 = (struct sd *) VAR_9;
 __u32 VAR_13;
 u8 VAR_14;
 int VAR_15 = VAR_11;

 do {
  VAR_11 = FUNC_2(VAR_15, 2040);







  if (VAR_10[0] != 12 || VAR_11 < 12) {
   FUNC_0(VAR_1, "bad header");
   goto discard;
  }


  if (VAR_10[1] & VAR_6) {
   FUNC_0(VAR_1, "payload error");
   goto discard;
  }


  if (!(VAR_10[1] & VAR_8)) {
   FUNC_0(VAR_1, "PTS not present");
   goto discard;
  }
  VAR_13 = (VAR_10[5] << 24) | (VAR_10[4] << 16)
      | (VAR_10[3] << 8) | VAR_10[2];
  VAR_14 = VAR_10[1] & VAR_7;


  if (VAR_13 != VAR_12->last_pts || VAR_14 != VAR_12->last_fid) {
   if (VAR_9->last_packet_type == VAR_3)
    FUNC_1(VAR_9, VAR_4,
      ((void*)0), 0);
   VAR_12->last_pts = VAR_13;
   VAR_12->last_fid = VAR_14;
   FUNC_1(VAR_9, VAR_2,
     VAR_10 + 12, VAR_11 - 12);

  } else if (VAR_10[1] & VAR_5) {
   VAR_12->last_pts = 0;
   FUNC_1(VAR_9, VAR_4,
     VAR_10 + 12, VAR_11 - 12);
  } else {


   FUNC_1(VAR_9, VAR_3,
     VAR_10 + 12, VAR_11 - 12);
  }


  goto scan_next;

discard:

  VAR_9->last_packet_type = VAR_0;

scan_next:
  VAR_15 -= VAR_11;
  VAR_10 += VAR_11;
 } while (VAR_15 > 0);
}
