
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct address_space {int host; } ;
typedef int sector_t ;
typedef int pgoff_t ;


 int FUNC_0 (int ,int ,int,int *) ;
 int FUNC_1 (int ,int ,void**,unsigned long*) ;

int FUNC_2(struct address_space *VAR_0, pgoff_t VAR_1, int VAR_2,
    void **VAR_3, unsigned long *VAR_4)
{
 int VAR_5;
 sector_t VAR_6;


 VAR_5 = FUNC_0(VAR_0->host, VAR_1, VAR_2, &VAR_6);
 if (VAR_5)
  return VAR_5;


 VAR_5 = FUNC_1(VAR_0->host, VAR_6, VAR_3, VAR_4);
 return VAR_5;
}
