
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int real ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 void* FUNC_0 (char*) ;
 void* FUNC_1 (char*) ;
 void* VAR_3 ;
 char* VAR_4 ;
 void* VAR_5 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (char*,int,char**) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*,char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 char* VAR_6 ;
 char* FUNC_8 (int) ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (char*) ;
 char* VAR_10 ;
 int VAR_11 ;
 char* VAR_12 ;
 int VAR_13 ;
 int FUNC_10 (char*,char*) ;
 int FUNC_11 () ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 char* VAR_17 ;
 scalar_t__ VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;

int FUNC_12(int VAR_21, char **VAR_22) {
    int VAR_23;
    FILE *VAR_24;
    VAR_17 = FUNC_8(sizeof(char) * VAR_1);
    VAR_6 = FUNC_8(sizeof(char) * VAR_1);
    VAR_10 = FUNC_8(sizeof(char) * VAR_1);
    VAR_12 = FUNC_8(sizeof(char) * VAR_1);
    int VAR_25 = 0;

    if (VAR_21 == 1) {
        FUNC_9("GloVe: Global Vectors for Word Representation, v0.2\n");
        FUNC_9("Author: Jeffrey Pennington (jpennin@stanford.edu)\n\n");
        FUNC_9("Usage options:\n");
        FUNC_9("\t-verbose <int>\n");
        FUNC_9("\t\tSet verbosity: 0, 1, or 2 (default)\n");
        FUNC_9("\t-write-header <int>\n");
        FUNC_9("\t\tIf 1, write vocab_size/vector_size as first line. Do nothing if 0 (default).\n");
        FUNC_9("\t-vector-size <int>\n");
        FUNC_9("\t\tDimension of word vector representations (excluding bias term); default 50\n");
        FUNC_9("\t-threads <int>\n");
        FUNC_9("\t\tNumber of threads; default 8\n");
        FUNC_9("\t-iter <int>\n");
        FUNC_9("\t\tNumber of training iterations; default 25\n");
        FUNC_9("\t-eta <float>\n");
        FUNC_9("\t\tInitial learning rate; default 0.05\n");
        FUNC_9("\t-alpha <float>\n");
        FUNC_9("\t\tParameter in exponent of weighting function; default 0.75\n");
        FUNC_9("\t-x-max <float>\n");
        FUNC_9("\t\tParameter specifying cutoff in weighting function; default 100.0\n");
        FUNC_9("\t-binary <int>\n");
        FUNC_9("\t\tSave output in binary format (0: text, 1: binary, 2: both); default 0\n");
        FUNC_9("\t-model <int>\n");
        FUNC_9("\t\tModel for word vector output (for text output only); default 2\n");
        FUNC_9("\t\t   0: output all data, for both word and context word vectors, including bias terms\n");
        FUNC_9("\t\t   1: output word vectors, excluding bias terms\n");
        FUNC_9("\t\t   2: output word vectors + context word vectors, excluding bias terms\n");
        FUNC_9("\t-input-file <file>\n");
        FUNC_9("\t\tBinary input file of shuffled cooccurrence data (produced by 'cooccur' and 'shuffle'); default cooccurrence.shuf.bin\n");
        FUNC_9("\t-vocab-file <file>\n");
        FUNC_9("\t\tFile containing vocabulary (truncated unigram counts, produced by 'vocab_count'); default vocab.txt\n");
        FUNC_9("\t-save-file <file>\n");
        FUNC_9("\t\tFilename, excluding extension, for word vector output; default vectors\n");
        FUNC_9("\t-gradsq-file <file>\n");
        FUNC_9("\t\tFilename, excluding extension, for squared gradient output; default gradsq\n");
        FUNC_9("\t-save-gradsq <int>\n");
        FUNC_9("\t\tSave accumulated squared gradients; default 0 (off); ignored if gradsq-file is specified\n");
        FUNC_9("\t-checkpoint-every <int>\n");
        FUNC_9("\t\tCheckpoint a  model every <int> iterations; default 0 (off)\n");
        FUNC_9("\nExample usage:\n");
        FUNC_9("./glove -input-file cooccurrence.shuf.bin -vocab-file vocab.txt -save-file vectors -gradsq-file gradsq -verbose 2 -vector-size 100 -threads 16 -alpha 0.75 -x-max 100.0 -eta 0.05 -binary 2 -model 2\n\n");
        VAR_25 = 0;
    } else {
        if ((VAR_23 = FUNC_3((char *)"-write-header", VAR_21, VAR_22)) > 0) VAR_19 = FUNC_1(VAR_22[VAR_23 + 1]);
        if ((VAR_23 = FUNC_3((char *)"-verbose", VAR_21, VAR_22)) > 0) VAR_16 = FUNC_1(VAR_22[VAR_23 + 1]);
        if ((VAR_23 = FUNC_3((char *)"-vector-size", VAR_21, VAR_22)) > 0) VAR_15 = FUNC_1(VAR_22[VAR_23 + 1]);
        if ((VAR_23 = FUNC_3((char *)"-iter", VAR_21, VAR_22)) > 0) VAR_8 = FUNC_1(VAR_22[VAR_23 + 1]);
        if ((VAR_23 = FUNC_3((char *)"-threads", VAR_21, VAR_22)) > 0) VAR_9 = FUNC_1(VAR_22[VAR_23 + 1]);
        VAR_4 = FUNC_8(sizeof(real) * VAR_9);
        if ((VAR_23 = FUNC_3((char *)"-alpha", VAR_21, VAR_22)) > 0) VAR_2 = FUNC_0(VAR_22[VAR_23 + 1]);
        if ((VAR_23 = FUNC_3((char *)"-x-max", VAR_21, VAR_22)) > 0) VAR_20 = FUNC_0(VAR_22[VAR_23 + 1]);
        if ((VAR_23 = FUNC_3((char *)"-eta", VAR_21, VAR_22)) > 0) VAR_5 = FUNC_0(VAR_22[VAR_23 + 1]);
        if ((VAR_23 = FUNC_3((char *)"-binary", VAR_21, VAR_22)) > 0) VAR_14 = FUNC_1(VAR_22[VAR_23 + 1]);
        if ((VAR_23 = FUNC_3((char *)"-model", VAR_21, VAR_22)) > 0) VAR_7 = FUNC_1(VAR_22[VAR_23 + 1]);
        if (VAR_7 != 0 && VAR_7 != 1) VAR_7 = 2;
        if ((VAR_23 = FUNC_3((char *)"-save-gradsq", VAR_21, VAR_22)) > 0) VAR_11 = FUNC_1(VAR_22[VAR_23 + 1]);
        if ((VAR_23 = FUNC_3((char *)"-vocab-file", VAR_21, VAR_22)) > 0) FUNC_10(VAR_17, VAR_22[VAR_23 + 1]);
        else FUNC_10(VAR_17, (char *)"vocab.txt");
        if ((VAR_23 = FUNC_3((char *)"-save-file", VAR_21, VAR_22)) > 0) FUNC_10(VAR_10, VAR_22[VAR_23 + 1]);
        else FUNC_10(VAR_10, (char *)"vectors");
        if ((VAR_23 = FUNC_3((char *)"-gradsq-file", VAR_21, VAR_22)) > 0) {
            FUNC_10(VAR_12, VAR_22[VAR_23 + 1]);
            VAR_11 = 1;
        }
        else if (VAR_11 > 0) FUNC_10(VAR_12, (char *)"gradsq");
        if ((VAR_23 = FUNC_3((char *)"-input-file", VAR_21, VAR_22)) > 0) FUNC_10(VAR_6, VAR_22[VAR_23 + 1]);
        else FUNC_10(VAR_6, (char *)"cooccurrence.shuf.bin");
        if ((VAR_23 = FUNC_3((char *)"-checkpoint-every", VAR_21, VAR_22)) > 0) VAR_3 = FUNC_1(VAR_22[VAR_23 + 1]);

        VAR_18 = 0;
        VAR_24 = FUNC_4(VAR_17, "r");
        if (VAR_24 == ((void*)0)) {FUNC_5(VAR_13, "Unable to open vocab file %s.\n",VAR_17); return 1;}
        while ((VAR_23 = FUNC_7(VAR_24)) != VAR_0) if (VAR_23 == '\n') VAR_18++;
        FUNC_2(VAR_24);
        if (VAR_18 == 0) {FUNC_5(VAR_13, "Unable to find any vocab entries in vocab file %s.\n", VAR_17); return 1;}
        VAR_25 = FUNC_11();
        FUNC_6(VAR_4);
    }
    FUNC_6(VAR_17);
    FUNC_6(VAR_6);
    FUNC_6(VAR_10);
    FUNC_6(VAR_12);
    return VAR_25;
}
