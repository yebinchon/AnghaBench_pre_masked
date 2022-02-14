
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int ulong ;
typedef int u_char ;
struct TYPE_5__ {int invoke_id; int remote_result; } ;
struct TYPE_6__ {TYPE_2__ ni1; } ;
struct l3_process {int redir_result; TYPE_3__ prot; struct PStack* st; } ;
struct TYPE_4__ {int (* l3l4 ) (struct PStack*,int,struct l3_process*) ;} ;
struct PStack {TYPE_1__ l3; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct PStack*,int) ;
 int FUNC_1 (struct PStack*,char*,...) ;
 int FUNC_2 (struct PStack*,int,int) ;
 int FUNC_3 (struct PStack*,int,int,int,int*,unsigned char) ;
 int FUNC_4 (struct PStack*,int,int*,unsigned char) ;
 int FUNC_5 (struct PStack*,int,struct l3_process*) ;
 int FUNC_6 (struct PStack*,int,struct l3_process*) ;

__attribute__((used)) static void
FUNC_7(struct PStack *VAR_2, struct l3_process *VAR_3,
                      int VAR_4, u_char * VAR_5)
{
 int VAR_6 = 0;
 unsigned char VAR_7 = 0, VAR_8, VAR_9;
 int VAR_10, VAR_11;
 ulong VAR_12;

 if (VAR_3)
  VAR_2 = VAR_3->st;
 else
  if ((!VAR_2) || (VAR_4 >= 0)) return;

 VAR_5++;
 VAR_6 = *VAR_5++;
 if (VAR_6 == 0) {
  FUNC_1(VAR_2, "qd_len == 0");
  return;
 }
 if ((*VAR_5 & 0x1F) != 0x11) {
  FUNC_1(VAR_2, "supplementary service != 0x11");
  return;
 }
 while (VAR_6 > 0 && !(*VAR_5 & 0x80)) {
  VAR_5++;
  VAR_6--;
 }
 if (VAR_6 < 2) {
  FUNC_1(VAR_2, "qd_len < 2");
  return;
 }
 VAR_5++;
 VAR_6--;
 if ((*VAR_5 & 0xE0) != 0xA0) {
  FUNC_1(VAR_2, "class and form != 0xA0");
  return;
 }

        VAR_9 = *VAR_5 & 0x1F;

        VAR_5++;
 VAR_6--;
 if (VAR_6 < 1)
          { FUNC_1(VAR_2, "qd_len < 1");
     return;
   }
 if (*VAR_5 & 0x80)
          {
     VAR_7 = *VAR_5++ & 0x7F;
            if ((VAR_6-- < ((!VAR_7) ? 3 : (1 + VAR_7))) ||
                (VAR_7 > 1))
      { FUNC_1(VAR_2, "length format error or not implemented");
        return;
             }
            if (VAR_7 == 1)
      { VAR_7 = *VAR_5++;
               VAR_6--;
             }
            else
      { VAR_6 -= 2;
               if ((*(VAR_5+VAR_6)) || (*(VAR_5+VAR_6+1)))
  { FUNC_1(VAR_2,"length format indefinite error");
                  return;
                }
               VAR_7 = VAR_6;
             }
   }
        else
   { VAR_7 = *VAR_5++;
     VAR_6--;
          }
 if (VAR_6 < VAR_7)
          { FUNC_1(VAR_2, "qd_len < nlen");
     return;
   }
 VAR_6 -= VAR_7;

 if (VAR_7 < 2)
          { FUNC_1(VAR_2, "nlen < 2");
     return;
   }
        if (*VAR_5 != 0x02)
          {
      FUNC_1(VAR_2, "invoke identifier tag !=0x02");
      return;
   }
 VAR_5++;
 VAR_7--;
 if (*VAR_5 & 0x80)
          {
     FUNC_1(VAR_2, "invoke id length format 2");
     return;
   }
 VAR_8 = *VAR_5++;
 VAR_7--;
 if (VAR_8 > VAR_7 || VAR_8 == 0)
          { FUNC_1(VAR_2, "ilen > nlen || ilen == 0");
     return;
   }
 VAR_7 -= VAR_8;
 VAR_11 = 0;
 while (VAR_8 > 0)
          { VAR_11 = (VAR_11 << 8) | (*VAR_5++ & 0xFF);
     VAR_8--;
   }

 switch (VAR_9) {
  case 1:
    if (VAR_7 < 2) {
     FUNC_1(VAR_2, "nlen < 2 22");
     return;
    }
    if (*VAR_5 != 0x02) {
     FUNC_1(VAR_2, "operation value !=0x02");
     return;
    }
    VAR_5++;
    VAR_7--;
    VAR_8 = *VAR_5++;
    VAR_7--;
    if (VAR_8 > VAR_7 || VAR_8 == 0) {
     FUNC_1(VAR_2, "ilen > nlen || ilen == 0 22");
     return;
    }
    VAR_7 -= VAR_8;
    VAR_10 = 0;
    while (VAR_8 > 0) {
     VAR_10 = (VAR_10 << 8) | (*VAR_5++ & 0xFF);
     VAR_8--;
    }

    if (!VAR_3)
    {
     FUNC_3(VAR_2, VAR_4, VAR_11, VAR_10, VAR_5, VAR_7);
     return;
    }
    FUNC_1(VAR_2, "invoke break");
    break;
  case 2:

                        if (!VAR_3)
    { if (VAR_4 == -1)
                             FUNC_4(VAR_2, VAR_11, VAR_5, VAR_7);
                           return;
                         }
                        if ((VAR_3->prot.ni1.invoke_id) && (VAR_3->prot.ni1.invoke_id == VAR_11))
                          {
                            FUNC_0(VAR_2,VAR_3->prot.ni1.invoke_id);
                            VAR_3->prot.ni1.remote_result = 0;
                            VAR_3->prot.ni1.invoke_id = 0;
                            VAR_3->redir_result = VAR_3->prot.ni1.remote_result;
                            VAR_2->l3.l3l4(VAR_2, VAR_0 | VAR_1, VAR_3); }
                        else
                          FUNC_1(VAR_2,"return error unknown identifier");
   break;
  case 3:
                            VAR_12 = 0;
                     if (VAR_7 < 2)
                              { FUNC_1(VAR_2, "return error nlen < 2");
                         return;
                       }
                            if (*VAR_5 != 0x02)
                              {
                         FUNC_1(VAR_2, "invoke error tag !=0x02");
                         return;
                       }
                     VAR_5++;
                     VAR_7--;
                     if (*VAR_5 > 4)
                              {
                         FUNC_1(VAR_2, "invoke return errlen > 4 ");
                         return;
                       }
                     VAR_8 = *VAR_5++;
                     VAR_7--;
                     if (VAR_8 > VAR_7 || VAR_8 == 0)
                              { FUNC_1(VAR_2, "error return ilen > nlen || ilen == 0");
                         return;
                        }
                     VAR_7 -= VAR_8;
                     while (VAR_8 > 0)
                             { VAR_12 = (VAR_12 << 8) | (*VAR_5++ & 0xFF);
                        VAR_8--;
                      }

                        if (!VAR_3)
    { if (VAR_4 == -1)
                             FUNC_2(VAR_2, VAR_11, VAR_12);
                           return;
                         }
                        if ((VAR_3->prot.ni1.invoke_id) && (VAR_3->prot.ni1.invoke_id == VAR_11))
                          {
                            FUNC_0(VAR_2,VAR_3->prot.ni1.invoke_id);
                            VAR_3->prot.ni1.remote_result = VAR_12;
                            VAR_3->prot.ni1.invoke_id = 0;
                            VAR_3->redir_result = VAR_3->prot.ni1.remote_result;
                            VAR_2->l3.l3l4(VAR_2, VAR_0 | VAR_1, VAR_3);
                          }
                        else
                          FUNC_1(VAR_2,"return result unknown identifier");
   break;
  default:
   FUNC_1(VAR_2, "facility default break tag=0x%02x",VAR_9);
   break;
 }
}
