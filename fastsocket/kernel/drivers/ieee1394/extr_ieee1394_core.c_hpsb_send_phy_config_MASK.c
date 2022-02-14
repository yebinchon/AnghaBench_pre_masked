
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_packet {int generation; } ;
struct hpsb_host {int dummy; } ;
typedef int quadlet_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,int,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (struct hpsb_host*) ;
 int FUNC_2 (struct hpsb_packet*) ;
 struct hpsb_packet* FUNC_3 (struct hpsb_host*,int) ;
 int FUNC_4 (struct hpsb_packet*) ;

int FUNC_5(struct hpsb_host *VAR_7, int VAR_8, int VAR_9)
{
 struct hpsb_packet *VAR_10;
 quadlet_t VAR_11 = 0;
 int VAR_12 = 0;

 if (VAR_8 >= VAR_0 || VAR_8 < -1 || VAR_9 > 0x3f || VAR_9 < -1 ||
    (VAR_8 == -1 && VAR_9 == -1)) {
  FUNC_0("Invalid Parameter: rootid = %d   gapcnt = %d",
      VAR_8, VAR_9);
  return -VAR_1;
 }

 if (VAR_8 != -1)
  VAR_11 |= VAR_4 | VAR_8 << VAR_6;
 if (VAR_9 != -1)
  VAR_11 |= VAR_5 | VAR_9 << VAR_3;

 VAR_10 = FUNC_3(VAR_7, VAR_11);
 if (!VAR_10)
  return -VAR_2;

 VAR_10->generation = FUNC_1(VAR_7);
 VAR_12 = FUNC_4(VAR_10);
 FUNC_2(VAR_10);

 return VAR_12;
}
