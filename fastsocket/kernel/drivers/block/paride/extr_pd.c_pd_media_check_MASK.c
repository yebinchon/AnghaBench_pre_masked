
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pd_unit {int changed; } ;
typedef enum action { ____Placeholder_action } action ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct pd_unit*,int,int,int ,int ,int ,int ) ;
 int FUNC_2 (struct pd_unit*,int ,int ) ;

__attribute__((used)) static enum action FUNC_3(struct pd_unit *VAR_6)
{
 int VAR_7 = FUNC_2(VAR_6, VAR_5, FUNC_0("before media_check"));
 if (!(VAR_7 & VAR_4)) {
  FUNC_1(VAR_6, 1, 1, 0, 0, 0, VAR_2);
  VAR_7 = FUNC_2(VAR_6, VAR_5, FUNC_0("RDY after READ_VRFY"));
 } else
  VAR_6->changed = 1;
 if (VAR_7 & VAR_0) {
  VAR_6->changed = 1;
  FUNC_1(VAR_6, 1, 0, 0, 0, 0, VAR_1);
  FUNC_2(VAR_6, VAR_5, FUNC_0("RDY after ACKCHANGE"));
  FUNC_1(VAR_6, 1, 1, 0, 0, 0, VAR_2);
  VAR_7 = FUNC_2(VAR_6, VAR_5, FUNC_0("RDY after VRFY"));
 }
 return VAR_3;
}
