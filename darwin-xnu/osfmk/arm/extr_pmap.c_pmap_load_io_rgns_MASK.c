
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pmap_io_range_t ;
typedef int DTEntry ;


 int FUNC_0 (int ,char*,void**,unsigned int*) ;
 int FUNC_1 (int *,char*,int *) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *,scalar_t__,int,int ) ;

__attribute__((used)) static void
FUNC_4(void)
{
 DTEntry VAR_4;
 pmap_io_range_t *VAR_5;
 void *VAR_6 = ((void*)0);
        int VAR_7;
 unsigned int VAR_8;

 if (VAR_3 == 0)
  return;

 VAR_7 = FUNC_1(((void*)0), "/defaults", &VAR_4);
 FUNC_2(VAR_7 == VAR_2);

 VAR_7 = FUNC_0(VAR_4, "pmap-io-ranges", &VAR_6, &VAR_8);
 FUNC_2(VAR_7 == VAR_2);

 VAR_5 = VAR_6;
 for (unsigned int VAR_9 = 0; VAR_9 < (VAR_8 / sizeof(*VAR_5)); ++VAR_9)
  VAR_1[VAR_9] = VAR_5[VAR_9];

 FUNC_3(VAR_1, VAR_3, sizeof(*VAR_5), VAR_0);
}
