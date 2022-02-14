
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_short ;
typedef int u_char ;
struct TYPE_2__ {unsigned int ioaddr; int psock; } ;


 size_t FUNC_0 (int ,size_t) ;
 int VAR_0 ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (size_t,unsigned int) ;
 TYPE_1__* VAR_1 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static u_char FUNC_5(u_short VAR_2, u_short VAR_3)
{
    unsigned long VAR_4;
    FUNC_3(&VAR_0,VAR_4);
    {
 unsigned int VAR_5 = VAR_1[VAR_2].ioaddr;
 u_char VAR_6;
 VAR_3 = FUNC_0(VAR_1[VAR_2].psock, VAR_3);
 FUNC_2(VAR_3, VAR_5); VAR_6 = FUNC_1(VAR_5+1);
 FUNC_4(&VAR_0,VAR_4);
 return VAR_6;
    }
}
