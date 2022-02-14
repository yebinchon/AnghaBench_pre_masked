
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef double real ;
typedef int CREC ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (char*) ;
 void* FUNC_1 (char*) ;
 void* FUNC_2 (char*) ;
 void* VAR_1 ;
 int FUNC_3 (double) ;
 int VAR_2 ;
 int FUNC_4 (char*,int,char**) ;
 int FUNC_5 () ;
 double FUNC_6 (double) ;
 int FUNC_7 (int) ;
 long long VAR_3 ;
 scalar_t__ VAR_4 ;
 long long VAR_5 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,char*) ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 void* VAR_9 ;

int FUNC_10(int VAR_10, char **VAR_11) {
    int VAR_12;
    real VAR_13, VAR_14 = 1e5;
    VAR_8 = FUNC_7(sizeof(char) * VAR_0);
    VAR_2 = FUNC_7(sizeof(char) * VAR_0);

    if (VAR_10 == 1) {
        FUNC_8("Tool to calculate word-word cooccurrence statistics\n");
        FUNC_8("Author: Jeffrey Pennington (jpennin@stanford.edu)\n\n");
        FUNC_8("Usage options:\n");
        FUNC_8("\t-verbose <int>\n");
        FUNC_8("\t\tSet verbosity: 0, 1, 2 (default), or 3\n");
        FUNC_8("\t-symmetric <int>\n");
        FUNC_8("\t\tIf <int> = 0, only use left context; if <int> = 1 (default), use left and right\n");
        FUNC_8("\t-window-size <int>\n");
        FUNC_8("\t\tNumber of context words to the left (and to the right, if symmetric = 1); default 15\n");
        FUNC_8("\t-vocab-file <file>\n");
        FUNC_8("\t\tFile containing vocabulary (truncated unigram counts, produced by 'vocab_count'); default vocab.txt\n");
        FUNC_8("\t-memory <float>\n");
        FUNC_8("\t\tSoft limit for memory consumption, in GB -- based on simple heuristic, so not extremely accurate; default 4.0\n");
        FUNC_8("\t-max-product <int>\n");
        FUNC_8("\t\tLimit the size of dense cooccurrence array by specifying the max product <int> of the frequency counts of the two cooccurring words.\n\t\tThis value overrides that which is automatically produced by '-memory'. Typically only needs adjustment for use with very large corpora.\n");
        FUNC_8("\t-overflow-length <int>\n");
        FUNC_8("\t\tLimit to length <int> the sparse overflow array, which buffers cooccurrence data that does not fit in the dense array, before writing to disk. \n\t\tThis value overrides that which is automatically produced by '-memory'. Typically only needs adjustment for use with very large corpora.\n");
        FUNC_8("\t-overflow-file <file>\n");
        FUNC_8("\t\tFilename, excluding extension, for temporary files; default overflow\n");
        FUNC_8("\t-distance-weighting <int>\n");
        FUNC_8("\t\tIf <int> = 0, do not weight cooccurrence count by distance between words; if <int> = 1 (default), weight the cooccurrence count by inverse of distance between words\n");

        FUNC_8("\nExample usage:\n");
        FUNC_8("./cooccur -verbose 2 -symmetric 0 -window-size 10 -vocab-file vocab.txt -memory 8.0 -overflow-file tempoverflow < corpus.txt > cooccurrences.bin\n\n");
        return 0;
    }

    if ((VAR_12 = FUNC_4((char *)"-verbose", VAR_10, VAR_11)) > 0) VAR_7 = FUNC_1(VAR_11[VAR_12 + 1]);
    if ((VAR_12 = FUNC_4((char *)"-symmetric", VAR_10, VAR_11)) > 0) VAR_6 = FUNC_1(VAR_11[VAR_12 + 1]);
    if ((VAR_12 = FUNC_4((char *)"-window-size", VAR_10, VAR_11)) > 0) VAR_9 = FUNC_1(VAR_11[VAR_12 + 1]);
    if ((VAR_12 = FUNC_4((char *)"-vocab-file", VAR_10, VAR_11)) > 0) FUNC_9(VAR_8, VAR_11[VAR_12 + 1]);
    else FUNC_9(VAR_8, (char *)"vocab.txt");
    if ((VAR_12 = FUNC_4((char *)"-overflow-file", VAR_10, VAR_11)) > 0) FUNC_9(VAR_2, VAR_11[VAR_12 + 1]);
    else FUNC_9(VAR_2, (char *)"overflow");
    if ((VAR_12 = FUNC_4((char *)"-memory", VAR_10, VAR_11)) > 0) VAR_4 = FUNC_0(VAR_11[VAR_12 + 1]);
    if ((VAR_12 = FUNC_4((char *)"-distance-weighting", VAR_10, VAR_11)) > 0) VAR_1 = FUNC_1(VAR_11[VAR_12 + 1]);



    VAR_13 = 0.85 * (real)VAR_4 * 1073741824/(sizeof(CREC));
    while (FUNC_3(VAR_13 - VAR_14 * (FUNC_6(VAR_14) + 0.1544313298)) > 1e-3) VAR_14 = VAR_13 / (FUNC_6(VAR_14) + 0.1544313298);
    VAR_3 = (long long) VAR_14;
    VAR_5 = (long long) VAR_13/6;


    if ((VAR_12 = FUNC_4((char *)"-max-product", VAR_10, VAR_11)) > 0) VAR_3 = FUNC_2(VAR_11[VAR_12 + 1]);
    if ((VAR_12 = FUNC_4((char *)"-overflow-length", VAR_10, VAR_11)) > 0) VAR_5 = FUNC_2(VAR_11[VAR_12 + 1]);

    return FUNC_5();
}
