
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hpsb_packet {int dummy; } ;
struct completion {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct hpsb_packet*) ;
 int FUNC_1 (struct hpsb_packet*,int ,struct completion*) ;
 int FUNC_2 (struct completion*) ;
 int FUNC_3 (struct completion*) ;

int FUNC_4(struct hpsb_packet *VAR_1)
{
 struct completion VAR_2;
 int VAR_3;

 FUNC_2(&VAR_2);
 FUNC_1(VAR_1, VAR_0, &VAR_2);
 VAR_3 = FUNC_0(VAR_1);
 if (VAR_3 == 0)
  FUNC_3(&VAR_2);

 return VAR_3;
}
