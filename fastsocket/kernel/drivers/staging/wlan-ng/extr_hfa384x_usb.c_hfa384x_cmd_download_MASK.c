
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u16 ;
typedef int hfa384x_t ;
struct TYPE_3__ {int cmd; void* parm2; void* parm1; void* parm0; } ;
typedef TYPE_1__ hfa384x_metacmd_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (void*) ;
 int FUNC_2 (int *,TYPE_1__*) ;
 int FUNC_3 (char*,void*,void*,void*,void*) ;

int FUNC_4(hfa384x_t *VAR_1, u16 VAR_2, u16 VAR_3,
    u16 VAR_4, u16 VAR_5)
{
 int VAR_6 = 0;
 hfa384x_metacmd_t VAR_7;

 FUNC_3("mode=%d, lowaddr=0x%04x, highaddr=0x%04x, codelen=%d\n",
   VAR_2, VAR_3, VAR_4, VAR_5);

 VAR_7.cmd = (FUNC_0(VAR_0) |
     FUNC_1(VAR_2));

 VAR_7.parm0 = VAR_3;
 VAR_7.parm1 = VAR_4;
 VAR_7.parm2 = VAR_5;

 VAR_6 = FUNC_2(VAR_1, &VAR_7);

 return VAR_6;
}
