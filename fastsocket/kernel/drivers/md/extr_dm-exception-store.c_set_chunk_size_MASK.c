
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dm_exception_store {scalar_t__ chunk_shift; scalar_t__ chunk_mask; scalar_t__ chunk_size; } ;


 int VAR_0 ;
 int FUNC_0 (struct dm_exception_store*,unsigned int,char**) ;
 scalar_t__ FUNC_1 (char const*,int,unsigned int*) ;

__attribute__((used)) static int FUNC_2(struct dm_exception_store *VAR_1,
     const char *VAR_2, char **VAR_3)
{
 unsigned VAR_4;

 if (FUNC_1(VAR_2, 10, &VAR_4)) {
  *VAR_3 = "Invalid chunk size";
  return -VAR_0;
 }

 if (!VAR_4) {
  VAR_1->chunk_size = VAR_1->chunk_mask = VAR_1->chunk_shift = 0;
  return 0;
 }

 return FUNC_0(VAR_1, VAR_4, VAR_3);
}
