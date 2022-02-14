
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mem_chunk {scalar_t__ size; scalar_t__ addr; } ;
struct inode {int dummy; } ;
struct file {char* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mem_chunk*) ;
 int FUNC_1 (struct mem_chunk*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (char*,char*,unsigned long long,unsigned long long) ;

__attribute__((used)) static int FUNC_4(struct inode *VAR_4, struct file *VAR_5)
{
 int VAR_6;
 char *VAR_7;
 struct mem_chunk *VAR_8;

 VAR_8 = FUNC_2(VAR_3 * sizeof(struct mem_chunk),
         VAR_2);
 if (!VAR_8)
  return -VAR_1;
 FUNC_0(VAR_8);
 VAR_7 = FUNC_2(VAR_3 * VAR_0, VAR_2);
 if (!VAR_7) {
  FUNC_1(VAR_8);
  return -VAR_1;
 }
 for (VAR_6 = 0; VAR_6 < VAR_3; VAR_6++) {
  FUNC_3(VAR_7 + (VAR_6 * VAR_0), "%016llx %016llx ",
   (unsigned long long) VAR_8[VAR_6].addr,
   (unsigned long long) VAR_8[VAR_6].size);
  if (VAR_8[VAR_6].size == 0)
   break;
 }
 FUNC_1(VAR_8);
 VAR_5->private_data = VAR_7;
 return 0;
}
