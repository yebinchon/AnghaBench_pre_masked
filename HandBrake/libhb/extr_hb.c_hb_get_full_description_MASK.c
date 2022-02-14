
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 char* FUNC_0 (char*,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ,int ) ;
 int VAR_9 ;
 int VAR_10 ;

const char * FUNC_1()
{
    static char * VAR_11 = ((void*)0);
    if (VAR_11 == ((void*)0))
    {
        VAR_11 = FUNC_0("%s\n"
                                "\tWebsite:     %s\n"
                                "\tForum:       %s\n"
                                "\tIRC:         %s\n"
                                "\tBuild Type:  %s\n"
                                "\tRepository:  %s\n"
                                "\tRelease Tag: %s\n"
                                "\tRevision:    %d\n"
                                "\tCommit Hash: %s\n"
                                "\tBranch:      %s\n"
                                "\tRemote:      %s",
                                VAR_9, VAR_10, VAR_0, VAR_1,
                                VAR_7, VAR_8, VAR_6, VAR_5,
                                VAR_3, VAR_2, VAR_4);
    }
    return VAR_11;
}
