
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_3__ {int status; char const* reason; } ;


 int FUNC_0 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;

__attribute__((used)) static const char *FUNC_1(u16 VAR_1)
{
 int VAR_2;
 for (VAR_2 = 0; VAR_2 < FUNC_0(VAR_0); VAR_2++)
  if (VAR_0[VAR_2].status == (VAR_1 & 0xff))
   return VAR_0[VAR_2].reason;
 return "Unknown status value.";
}
