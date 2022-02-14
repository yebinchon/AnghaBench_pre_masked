
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct inode {struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 char* FUNC_0 (struct page*,int ) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (char*,char const*,int) ;
 int FUNC_4 (int *,struct address_space*,int ,int,unsigned int,struct page**,void**) ;
 int FUNC_5 (int *,struct address_space*,int ,int,int,struct page*,void*) ;

int FUNC_6(struct inode *VAR_3, const char *VAR_4, int VAR_5, int VAR_6)
{
 struct address_space *VAR_7 = VAR_3->i_mapping;
 struct page *VAR_8;
 void *VAR_9;
 int VAR_10;
 char *VAR_11;
 unsigned int VAR_12 = VAR_1;
 if (VAR_6)
  VAR_12 |= VAR_0;

retry:
 VAR_10 = FUNC_4(((void*)0), VAR_7, 0, VAR_5-1,
    VAR_12, &VAR_8, &VAR_9);
 if (VAR_10)
  goto fail;

 VAR_11 = FUNC_0(VAR_8, VAR_2);
 FUNC_3(VAR_11, VAR_4, VAR_5-1);
 FUNC_1(VAR_11, VAR_2);

 VAR_10 = FUNC_5(((void*)0), VAR_7, 0, VAR_5-1, VAR_5-1,
       VAR_8, VAR_9);
 if (VAR_10 < 0)
  goto fail;
 if (VAR_10 < VAR_5-1)
  goto retry;

 FUNC_2(VAR_3);
 return 0;
fail:
 return VAR_10;
}
