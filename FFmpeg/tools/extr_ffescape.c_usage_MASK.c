
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static void FUNC_1(void)
{
    FUNC_0("Escape an input string, adopting the av_get_token() escaping logic\n");
    FUNC_0("usage: ffescape [OPTIONS]\n");
    FUNC_0("\n"
           "Options:\n"
           "-e                echo each input line on output\n"
           "-f flag           select an escape flag, can assume the values 'whitespace' and 'strict'\n"
           "-h                print this help\n"
           "-i INFILE         set INFILE as input file, stdin if omitted\n"
           "-l LEVEL          set the number of escaping levels, 1 if omitted\n"
           "-m ESCAPE_MODE    select escape mode between 'auto', 'backslash', 'quote'\n"
           "-o OUTFILE        set OUTFILE as output file, stdout if omitted\n"
           "-p PROMPT         set output prompt, is '=> ' by default\n"
           "-s SPECIAL_CHARS  set the list of special characters\n");
}
