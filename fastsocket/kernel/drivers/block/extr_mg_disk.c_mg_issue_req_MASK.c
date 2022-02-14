
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct request {int dummy; } ;
struct mg_host {unsigned int error; scalar_t__ dev_base; int timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;


 int FUNC_0 (int *) ;
 int VAR_10 ;
 int FUNC_1 (struct mg_host*) ;
 unsigned int FUNC_2 (struct mg_host*,unsigned int,unsigned int,int ,int *) ;
 int VAR_11 ;
 int FUNC_3 (struct mg_host*,int ,int ) ;
 int VAR_12 ;
 int FUNC_4 (struct mg_host*,struct request*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (struct request*) ;

__attribute__((used)) static unsigned int FUNC_8(struct request *VAR_13,
  struct mg_host *VAR_14,
  unsigned int VAR_15,
  unsigned int VAR_16)
{
 switch (FUNC_7(VAR_13)) {
 case 129:
  if (FUNC_2(VAR_14, VAR_15, VAR_16, VAR_3, &VAR_11)
    != VAR_6) {
   FUNC_1(VAR_14);
   return VAR_14->error;
  }
  break;
 case 128:

  FUNC_6(VAR_1, (unsigned long)VAR_14->dev_base + VAR_8);
  if (FUNC_2(VAR_14, VAR_15, VAR_16, VAR_4, &VAR_12)
    != VAR_6) {
   FUNC_1(VAR_14);
   return VAR_14->error;
  }
  FUNC_0(&VAR_14->timer);
  FUNC_3(VAR_14, VAR_0, VAR_9);
  FUNC_6(0, (unsigned long)VAR_14->dev_base + VAR_8);
  if (VAR_14->error) {
   FUNC_1(VAR_14);
   return VAR_14->error;
  }
  FUNC_4(VAR_14, VAR_13);
  FUNC_5(&VAR_14->timer, VAR_10 + 3 * VAR_2);
  FUNC_6(VAR_5, (unsigned long)VAR_14->dev_base +
    VAR_7);
  break;
 }
 return VAR_6;
}
