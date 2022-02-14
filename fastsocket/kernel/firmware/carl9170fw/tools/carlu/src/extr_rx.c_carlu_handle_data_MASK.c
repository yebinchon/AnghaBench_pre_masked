
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct carlu {int (* rx_cb ) (struct carlu*,void*,unsigned int) ;} ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ,char*,void*,unsigned int) ;
 int FUNC_2 (struct carlu*,void*,unsigned int) ;

__attribute__((used)) static void FUNC_3(struct carlu *VAR_1, void *VAR_2,
          unsigned int VAR_3)
{
 if (VAR_1->rx_cb) {
  VAR_1->rx_cb(VAR_1, VAR_2, VAR_3);
 } else {
  FUNC_0("unhandled data:\n");
  FUNC_1(VAR_0, "DATA:", VAR_2, VAR_3);
 }
}
