
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct scatterlist {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_3 ;
 int FUNC_1 (char*,scalar_t__,scalar_t__) ;
 int FUNC_2 (char*,scalar_t__,scalar_t__,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct scatterlist*) ;

__attribute__((used)) static int FUNC_6(struct scatterlist *VAR_4,
         int VAR_5, int VAR_6,
         u64 *VAR_7)
{
 int VAR_8;
 for (VAR_8 = VAR_5; VAR_8 <= VAR_6; VAR_8++) {
  u64 VAR_9 = FUNC_3(FUNC_5(&VAR_4[VAR_8])) << VAR_1;
  if (VAR_3 >= 3)
   FUNC_1("chunk_page=%llx value=%016llx", VAR_9,
         *(u64 *)FUNC_0(FUNC_4(VAR_9)));
  if (VAR_9 - VAR_2 != *VAR_7) {
   FUNC_2("uncontiguous page found pgaddr=%llx "
         "prev_pgaddr=%llx page_list_i=%x",
         VAR_9, *VAR_7, VAR_8);
   return -VAR_0;
  }
  *VAR_7 = VAR_9;
 }
 return 0;
}
