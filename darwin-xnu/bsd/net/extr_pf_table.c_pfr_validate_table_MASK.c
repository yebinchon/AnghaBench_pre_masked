
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pfr_table {int pfrt_flags; int pfrt_anchor; scalar_t__* pfrt_name; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (scalar_t__*) ;

__attribute__((used)) static int
FUNC_3(struct pfr_table *VAR_2, int VAR_3, int VAR_4)
{
 int VAR_5;

 if (!VAR_2->pfrt_name[0])
  return (-1);
 if (VAR_4 && FUNC_1(VAR_2->pfrt_anchor, VAR_0) == 0)
  return (-1);
 if (VAR_2->pfrt_name[VAR_1-1])
  return (-1);
 for (VAR_5 = FUNC_2(VAR_2->pfrt_name); VAR_5 < VAR_1; VAR_5++)
  if (VAR_2->pfrt_name[VAR_5])
   return (-1);
 if (FUNC_0(VAR_2->pfrt_anchor))
  return (-1);
 if (VAR_2->pfrt_flags & ~VAR_3)
  return (-1);
 return (0);
}
