
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct stat {int st_mode; } ;
struct TYPE_3__ {char* filename; } ;
typedef TYPE_1__ URLContext ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_1 (char const*,int ) ;
 int FUNC_2 (char const*,char*,char const**) ;
 int VAR_7 ;
 int FUNC_3 (char const*,struct stat*) ;
 int FUNC_4 (char const*,struct stat*) ;

__attribute__((used)) static int FUNC_5(URLContext *VAR_8, int VAR_9)
{
    int VAR_10 = 0;
    const char *VAR_11 = VAR_8->filename;
    FUNC_2(VAR_11, "file:", &VAR_11);

    {
    struct stat VAR_12;

    VAR_10 = FUNC_3(VAR_11, &VAR_12);



    if (VAR_10 < 0)
        return FUNC_0(VAR_7);

    VAR_10 |= VAR_12.st_mode&VAR_4 ? VAR_9&VAR_0 : 0;
    VAR_10 |= VAR_12.st_mode&VAR_5 ? VAR_9&VAR_1 : 0;

    }
    return VAR_10;
}
