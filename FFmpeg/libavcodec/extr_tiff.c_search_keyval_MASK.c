
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int keys ;
struct TYPE_5__ {char const* name; } ;
typedef TYPE_1__ TiffGeoTagKeyName ;


 TYPE_1__* FUNC_0 (int*,TYPE_1__ const*,int,int,int ) ;
 int VAR_0 ;

__attribute__((used)) static const char *FUNC_1(const TiffGeoTagKeyName *VAR_1, int VAR_2, int VAR_3)
{
    TiffGeoTagKeyName *VAR_4 = FUNC_0(&VAR_3, VAR_1, VAR_2, sizeof(VAR_1[0]), VAR_0);
    if(VAR_4)
        return VAR_4->name;

    return ((void*)0);
}
