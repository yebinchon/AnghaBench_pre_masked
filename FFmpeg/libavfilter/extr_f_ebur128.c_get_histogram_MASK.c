
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hist_entry {scalar_t__ loudness; int energy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 struct hist_entry* FUNC_1 (int,int) ;

__attribute__((used)) static struct hist_entry *FUNC_2(void)
{
    int VAR_3;
    struct hist_entry *VAR_4 = FUNC_1(VAR_2, sizeof(*VAR_4));

    if (!VAR_4)
        return ((void*)0);
    for (VAR_3 = 0; VAR_3 < VAR_2; VAR_3++) {
        VAR_4[VAR_3].loudness = VAR_3 / (double)VAR_1 + VAR_0;
        VAR_4[VAR_3].energy = FUNC_0(VAR_4[VAR_3].loudness);
    }
    return VAR_4;
}
