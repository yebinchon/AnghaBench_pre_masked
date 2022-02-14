
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pohmelfs_name {char* data; int sync_create_entry; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct pohmelfs_name* FUNC_1 (int,int ) ;

__attribute__((used)) static struct pohmelfs_name *FUNC_2(unsigned int VAR_1)
{
 struct pohmelfs_name *VAR_2;

 VAR_2 = FUNC_1(sizeof(struct pohmelfs_name) + VAR_1, VAR_0);
 if (!VAR_2)
  return ((void*)0);

 FUNC_0(&VAR_2->sync_create_entry);

 VAR_2->data = (char *)(VAR_2+1);

 return VAR_2;
}
