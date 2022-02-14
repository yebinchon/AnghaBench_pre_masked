
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* dim; int type; } ;
struct TYPE_6__ {char* name; int flags; int alias_ref; TYPE_1__ info; } ;
typedef TYPE_2__ ccv_nnc_tensor_symbol_info_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *,char*,int const) ;
 int FUNC_4 (char,int *) ;
 int FUNC_5 (char*,int *) ;

__attribute__((used)) static void FUNC_6(const int VAR_7, const ccv_nnc_tensor_symbol_info_t* const VAR_8, const ccv_nnc_tensor_symbol_info_t* const VAR_9, const int VAR_10, const int VAR_11, FILE* VAR_12)
{

 if ((VAR_11 == VAR_1 || VAR_9) && !VAR_10)
  FUNC_4('{', VAR_12);
 if (VAR_8->name)
  FUNC_5(VAR_8->name, VAR_12);
 else
  FUNC_3(VAR_12, "tensor%d", VAR_7);
 if (VAR_11 == VAR_1)
 {
  int VAR_13 = -1;
  if (VAR_8->flags & VAR_4)
   VAR_13 = FUNC_5(" (0", VAR_12);
  else if (VAR_8->flags & VAR_3)
    VAR_13 = FUNC_5(" (1", VAR_12);
  if (VAR_8->flags & VAR_5)
   VAR_13 = (VAR_13 >= 0) ? FUNC_5(",t", VAR_12) : FUNC_5(" (t", VAR_12);
  if (FUNC_2(VAR_8->info.type) == VAR_6 &&
   FUNC_0(VAR_8->info.type) != VAR_0)
   VAR_13 = (VAR_13 >= 0) ? FUNC_3(VAR_12, ",d%d", FUNC_1(VAR_8->info.type)) : FUNC_3(VAR_12, " (d%d", FUNC_1(VAR_8->info.type));
  if (VAR_13 >= 0)
   FUNC_5(")", VAR_12);
 }
 if (VAR_11 == VAR_1)
 {
  int VAR_14;
  if (VAR_10)
   FUNC_3(VAR_12, "</td><td>%d", VAR_8->info.dim[0]);
  else
   FUNC_3(VAR_12, "|%d", VAR_8->info.dim[0]);
  for (VAR_14 = 1; VAR_14 < VAR_2 && VAR_8->info.dim[VAR_14]; VAR_14++)
   FUNC_3(VAR_12, "x%d", VAR_8->info.dim[VAR_14]);
 }
 if (VAR_9)
 {
  if (VAR_10)
   FUNC_5("</td><td border=\"0\">as. ", VAR_12);
  else
   FUNC_5("|as. ", VAR_12);
  if (VAR_9->name)
   FUNC_5(VAR_9->name, VAR_12);
  else
   FUNC_3(VAR_12, "tensor%d", VAR_8->alias_ref - 1);
  if (VAR_11 == VAR_1)
  {
   int VAR_15 = -1;
   if (VAR_9->flags & VAR_4)
    VAR_15 = FUNC_5(" (0", VAR_12);
   else if (VAR_9->flags & VAR_3)
    VAR_15 = FUNC_5(" (1", VAR_12);
   if (VAR_9->flags & VAR_5)
    VAR_15 = (VAR_15 >= 0) ? FUNC_5(",t", VAR_12) : FUNC_5(" (t", VAR_12);
   if (FUNC_2(VAR_9->info.type) == VAR_6 &&
    FUNC_0(VAR_9->info.type) != VAR_0)
    VAR_15 = (VAR_15 >= 0) ? FUNC_3(VAR_12, ",d%d", FUNC_1(VAR_9->info.type)) : FUNC_3(VAR_12, " (d%d", FUNC_1(VAR_9->info.type));
   if (VAR_15 >= 0)
    FUNC_5(")", VAR_12);
  }
 }
 if ((VAR_11 == VAR_1 || VAR_9) && !VAR_10)
  FUNC_4('}', VAR_12);
}
