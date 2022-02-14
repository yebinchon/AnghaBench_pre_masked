
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct TocEntry {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ,void*,int,void*,int,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct TocEntry*,int*,int) ;
 int* VAR_3 ;
 int FUNC_2 (char*,char const*,int) ;

int FUNC_3(const char *VAR_4, struct TocEntry *VAR_5)
{
    if (!VAR_2)
        return -1;

    FUNC_2((char *)&VAR_3, VAR_4, 1024);

    FUNC_0(&VAR_1, VAR_0, 0, (void *)(&VAR_3[0]), 1024, (void *)(&VAR_3[0]), sizeof(struct TocEntry) + 1024, 0, 0);

    FUNC_1(VAR_5, &VAR_3[256], sizeof(struct TocEntry));

    return VAR_3[0];
}
