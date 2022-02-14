
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int file_list_t ;
struct TYPE_2__ {int match_idx; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,unsigned int*,unsigned int*,unsigned int*,unsigned int*) ;
 TYPE_1__ VAR_1 ;
 int FUNC_1 (char*,size_t,char*,unsigned int,unsigned int) ;
 int FUNC_2 (char*,char const*,size_t) ;

__attribute__((used)) static void FUNC_3(
      file_list_t* VAR_2,
      unsigned *VAR_3, unsigned VAR_4, unsigned VAR_5,
      const char *VAR_6,
      char *VAR_7, size_t VAR_8,
      const char *VAR_9,
      char *VAR_10, size_t VAR_11)
{
   unsigned int VAR_12 = 0;
   unsigned int VAR_13 = 0;
   unsigned int VAR_14 = 0;
   unsigned int VAR_15 = 0 ;
   FUNC_0(VAR_0, VAR_1.match_idx, &VAR_12, &VAR_13, &VAR_14, &VAR_15);

   FUNC_1(VAR_7, VAR_8, "Prev: %u Curr: %u", VAR_14, VAR_15);
   *VAR_3 = 19;
   FUNC_2(VAR_10, VAR_9, VAR_11);
}
