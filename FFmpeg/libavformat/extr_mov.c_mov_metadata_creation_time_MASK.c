
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int int64_t ;
typedef int AVDictionary ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,char*) ;
 int FUNC_1 (int **,char*,int) ;

__attribute__((used)) static void FUNC_2(AVDictionary **VAR_1, int64_t VAR_2, void *VAR_3)
{
    if (VAR_2) {
        if(VAR_2 >= 2082844800)
            VAR_2 -= 2082844800;

        if ((int64_t)(VAR_2 * 1000000ULL) / 1000000 != VAR_2) {
            FUNC_0(VAR_3, VAR_0, "creation_time is not representable\n");
            return;
        }

        FUNC_1(VAR_1, "creation_time", VAR_2 * 1000000);
    }
}
