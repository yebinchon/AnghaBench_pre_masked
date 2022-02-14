
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int va_list ;


 int VAR_0 ;
 int FUNC_0 (void*,int ,char*) ;
 int FUNC_1 (void*,int ,char const*,int ) ;

__attribute__((used)) static void FUNC_2(int VAR_1, void *VAR_2, const char *VAR_3,
                                   va_list VAR_4)
{
    FUNC_1(VAR_2, VAR_0, VAR_3, VAR_4);
    FUNC_0(VAR_2, VAR_0, " is not implemented. Update your FFmpeg "
           "version to the newest one from Git. If the problem still "
           "occurs, it means that your file has a feature which has not "
           "been implemented.\n");
    if (VAR_1)
        FUNC_0(VAR_2, VAR_0, "If you want to help, upload a sample "
               "of this file to ftp://upload.ffmpeg.org/incoming/ "
               "and contact the ffmpeg-devel mailing list. (ffmpeg-devel@ffmpeg.org)\n");
}
