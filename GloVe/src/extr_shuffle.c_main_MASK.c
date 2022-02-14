
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double real ;
typedef int CREC ;


 int VAR_0 ;
 long long VAR_1 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 long long FUNC_2 (char*) ;
 int VAR_2 ;
 int FUNC_3 (char*,int,char**) ;
 int FUNC_4 (int) ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,char*) ;
 int VAR_4 ;

int FUNC_8(int VAR_5, char **VAR_6) {
    int VAR_7;
    VAR_2 = FUNC_4(sizeof(char) * VAR_0);

    if (VAR_5 == 1) {
        FUNC_5("Tool to shuffle entries of word-word cooccurrence files\n");
        FUNC_5("Author: Jeffrey Pennington (jpennin@stanford.edu)\n\n");
        FUNC_5("Usage options:\n");
        FUNC_5("\t-verbose <int>\n");
        FUNC_5("\t\tSet verbosity: 0, 1, or 2 (default)\n");
        FUNC_5("\t-memory <float>\n");
        FUNC_5("\t\tSoft limit for memory consumption, in GB; default 4.0\n");
        FUNC_5("\t-array-size <int>\n");
        FUNC_5("\t\tLimit to length <int> the buffer which stores chunks of data to shuffle before writing to disk. \n\t\tThis value overrides that which is automatically produced by '-memory'.\n");
        FUNC_5("\t-temp-file <file>\n");
        FUNC_5("\t\tFilename, excluding extension, for temporary files; default temp_shuffle\n");

        FUNC_5("\nExample usage: (assuming 'cooccurrence.bin' has been produced by 'coccur')\n");
        FUNC_5("./shuffle -verbose 2 -memory 8.0 < cooccurrence.bin > cooccurrence.shuf.bin\n");
        return 0;
    }

    if ((VAR_7 = FUNC_3((char *)"-verbose", VAR_5, VAR_6)) > 0) VAR_4 = FUNC_1(VAR_6[VAR_7 + 1]);
    if ((VAR_7 = FUNC_3((char *)"-temp-file", VAR_5, VAR_6)) > 0) FUNC_7(VAR_2, VAR_6[VAR_7 + 1]);
    else FUNC_7(VAR_2, (char *)"temp_shuffle");
    if ((VAR_7 = FUNC_3((char *)"-memory", VAR_5, VAR_6)) > 0) VAR_3 = FUNC_0(VAR_6[VAR_7 + 1]);
    VAR_1 = (long long) (0.95 * (real)VAR_3 * 1073741824/(sizeof(CREC)));
    if ((VAR_7 = FUNC_3((char *)"-array-size", VAR_5, VAR_6)) > 0) VAR_1 = FUNC_2(VAR_6[VAR_7 + 1]);
    return FUNC_6();
}
