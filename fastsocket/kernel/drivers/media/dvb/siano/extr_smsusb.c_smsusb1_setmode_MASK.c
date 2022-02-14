
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct SmsMsgHdr_ST {int member_3; int member_4; int member_2; int member_1; int member_0; } ;
typedef int Msg ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*,int) ;
 int FUNC_1 (void*,struct SmsMsgHdr_ST*,int) ;

__attribute__((used)) static int FUNC_2(void *VAR_5, int VAR_6)
{
 struct SmsMsgHdr_ST VAR_7 = { VAR_4, 0, VAR_3,
        sizeof(struct SmsMsgHdr_ST), 0 };

 if (VAR_6 < VAR_0 || VAR_6 > VAR_1) {
  FUNC_0("invalid firmware id specified %d", VAR_6);
  return -VAR_2;
 }

 return FUNC_1(VAR_5, &VAR_7, sizeof(VAR_7));
}
