
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int off_t ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (char*,char*,...) ;

__attribute__((used)) static int FUNC_2(char *VAR_4, char **VAR_5, off_t VAR_6,
      int VAR_7, int *VAR_8, void *VAR_9)
{
 int VAR_10 = 0;

 VAR_10 += FUNC_1(VAR_4 + VAR_10, "dma_map_mem statistics\n");
 VAR_10 +=
     FUNC_1(VAR_4 + VAR_10, "coherent: %d\n",
      FUNC_0(&VAR_0));
 VAR_10 +=
     FUNC_1(VAR_4 + VAR_10, "kmalloc:  %d\n",
      FUNC_0(&VAR_1));
 VAR_10 +=
     FUNC_1(VAR_4 + VAR_10, "vmalloc:  %d\n",
      FUNC_0(&VAR_3));
 VAR_10 +=
     FUNC_1(VAR_4 + VAR_10, "user:     %d\n",
      FUNC_0(&VAR_2));

 return VAR_10;
}
