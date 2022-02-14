
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int Interval ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int VAR_3 ;
 int FUNC_2 (void*,int ,char*,...) ;
 int * FUNC_3 (int *,int,int) ;
 int FUNC_4 (int *,int,char const**,void*) ;
 int FUNC_5 (char const**) ;
 int FUNC_6 (char const*,int ) ;

__attribute__((used)) static int FUNC_7(Interval **VAR_4, int *VAR_5,
                           const char *VAR_6, void *VAR_7)
{
    int VAR_8 = 0;
    int VAR_9, VAR_10 = 0;

    *VAR_4 = ((void*)0);
    *VAR_5 = 0;

    if (!VAR_6)
        return 0;

    while (1) {
        Interval VAR_11;

        FUNC_5(&VAR_6);
        if (!(*VAR_6))
            break;

        if ((VAR_9 = FUNC_4(&VAR_11, VAR_8, &VAR_6, VAR_7)) < 0)
            return VAR_9;

        VAR_6 += FUNC_6(VAR_6, VAR_3);
        if (*VAR_6) {
            if (*VAR_6 != ';') {
                FUNC_2(VAR_7, VAR_0,
                       "Missing terminator or extraneous data found at the end of interval #%d\n",
                       VAR_8);
                return FUNC_0(VAR_1);
            }
            VAR_6++;
        }
        VAR_8++;


        if (*VAR_5 == VAR_10) {
            VAR_10 = FUNC_1(16, 2*VAR_10);
            *VAR_4 = FUNC_3(*VAR_4, VAR_10, 2*sizeof(Interval));
            if (!*VAR_4) {
                FUNC_2(VAR_7, VAR_0,
                       "Could not (re)allocate intervals array\n");
                return FUNC_0(VAR_2);
            }
        }

        (*VAR_4)[(*VAR_5)++] = VAR_11;
    }

    return 0;
}
