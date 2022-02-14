
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct keypoint {int x; int y; struct keypoint* next; } ;
typedef int AVFilterContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,char*,int const,int,...) ;
 void* FUNC_2 (char*,char**) ;
 struct keypoint* FUNC_3 (int ,int ,int *) ;

__attribute__((used)) static int FUNC_4(AVFilterContext *VAR_4, struct keypoint **VAR_5, const char *VAR_6,
                            int VAR_7)
{
    char *VAR_8 = (char *)VAR_6;
    struct keypoint *VAR_9 = ((void*)0);
    const int VAR_10 = VAR_7 - 1;


    while (VAR_8 && *VAR_8) {
        struct keypoint *VAR_11 = FUNC_3(0, 0, ((void*)0));
        if (!VAR_11)
            return FUNC_0(VAR_3);
        VAR_11->x = FUNC_2(VAR_8, &VAR_8); if (VAR_8 && *VAR_8) VAR_8++;
        VAR_11->y = FUNC_2(VAR_8, &VAR_8); if (VAR_8 && *VAR_8) VAR_8++;
        if (VAR_11->x < 0 || VAR_11->x > 1 || VAR_11->y < 0 || VAR_11->y > 1) {
            FUNC_1(VAR_4, VAR_0, "Invalid key point coordinates (%f;%f), "
                   "x and y must be in the [0;1] range.\n", VAR_11->x, VAR_11->y);
            return FUNC_0(VAR_2);
        }
        if (!*VAR_5)
            *VAR_5 = VAR_11;
        if (VAR_9) {
            if ((int)(VAR_9->x * VAR_10) >= (int)(VAR_11->x * VAR_10)) {
                FUNC_1(VAR_4, VAR_0, "Key point coordinates (%f;%f) "
                       "and (%f;%f) are too close from each other or not "
                       "strictly increasing on the x-axis\n",
                       VAR_9->x, VAR_9->y, VAR_11->x, VAR_11->y);
                return FUNC_0(VAR_2);
            }
            VAR_9->next = VAR_11;
        }
        VAR_9 = VAR_11;
    }

    if (*VAR_5 && !(*VAR_5)->next) {
        FUNC_1(VAR_4, VAR_1, "Only one point (at (%f;%f)) is defined, "
               "this is unlikely to behave as you expect. You probably want"
               "at least 2 points.",
               (*VAR_5)->x, (*VAR_5)->y);
    }

    return 0;
}
