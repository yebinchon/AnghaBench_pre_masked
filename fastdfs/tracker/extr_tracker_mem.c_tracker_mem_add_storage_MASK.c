
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * pStorage; int pGroup; } ;
typedef TYPE_1__ TrackerClientInfo ;
typedef int FDFSStorageDetail ;


 int FUNC_0 (int ,int **,char const*,char const*,int const,int const,int*) ;

__attribute__((used)) static int FUNC_1(TrackerClientInfo *VAR_0,
  const char *VAR_1, const char *VAR_2,
  const bool VAR_3, const bool VAR_4, bool *VAR_5)
{
 int VAR_6;
 FDFSStorageDetail *VAR_7;

 VAR_7 = ((void*)0);
 VAR_6 = FUNC_0(VAR_0->pGroup, &VAR_7, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5);


 if (VAR_6 == 0)
 {
  VAR_0->pStorage = VAR_7;
 }

 return VAR_6;
}
