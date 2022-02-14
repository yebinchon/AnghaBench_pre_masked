
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static int FUNC_1(const char *VAR_2, uint32_t VAR_3)
{
    return FUNC_0(VAR_2, "title") &&
           FUNC_0(VAR_2, "stereo_mode") &&
           FUNC_0(VAR_2, "creation_time") &&
           FUNC_0(VAR_2, "encoding_tool") &&
           FUNC_0(VAR_2, "duration") &&
           (VAR_3 != VAR_1 ||
            FUNC_0(VAR_2, "language")) &&
           (VAR_3 != VAR_0 ||
            (FUNC_0(VAR_2, "filename") &&
             FUNC_0(VAR_2, "mimetype")));
}
