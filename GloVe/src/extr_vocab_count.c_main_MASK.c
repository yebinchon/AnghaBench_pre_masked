
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 void* FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char**) ;
 int FUNC_3 () ;
 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_4 (char*) ;
 int VAR_2 ;

int FUNC_5(int VAR_3, char **VAR_4) {
    int VAR_5;
    if (VAR_3 == 1) {
        FUNC_4("Simple tool to extract unigram counts\n");
        FUNC_4("Author: Jeffrey Pennington (jpennin@stanford.edu)\n\n");
        FUNC_4("Usage options:\n");
        FUNC_4("\t-verbose <int>\n");
        FUNC_4("\t\tSet verbosity: 0, 1, or 2 (default)\n");
        FUNC_4("\t-max-vocab <int>\n");
        FUNC_4("\t\tUpper bound on vocabulary size, i.e. keep the <int> most frequent words. The minimum frequency words are randomly sampled so as to obtain an even distribution over the alphabet.\n");
        FUNC_4("\t-min-count <int>\n");
        FUNC_4("\t\tLower limit such that words which occur fewer than <int> times are discarded.\n");
        FUNC_4("\nExample usage:\n");
        FUNC_4("./vocab_count -verbose 2 -max-vocab 100000 -min-count 10 < corpus.txt > vocab.txt\n");
        return 0;
    }

    if ((VAR_5 = FUNC_2((char *)"-verbose", VAR_3, VAR_4)) > 0) VAR_2 = FUNC_0(VAR_4[VAR_5 + 1]);
    if ((VAR_5 = FUNC_2((char *)"-max-vocab", VAR_3, VAR_4)) > 0) VAR_0 = FUNC_1(VAR_4[VAR_5 + 1]);
    if ((VAR_5 = FUNC_2((char *)"-min-count", VAR_3, VAR_4)) > 0) VAR_1 = FUNC_1(VAR_4[VAR_5 + 1]);
    return FUNC_3();
}
