
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;
typedef scalar_t__ BROTLI_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int FUNC_0 (int *,char*,...) ;
 int * VAR_6 ;
 int * VAR_7 ;

__attribute__((used)) static void FUNC_1(const char* VAR_8, BROTLI_BOOL VAR_9) {
  FILE* VAR_10 = VAR_9 ? VAR_6 : VAR_7;

  FUNC_0(VAR_10,
"Usage: %s [OPTION]... [FILE]...\n",
          VAR_8);
  FUNC_0(VAR_10,
"Options:\n"
"  -#                          compression level (0-9)\n"
"  -c, --stdout                write on standard output\n"
"  -d, --decompress            decompress\n"
"  -f, --force                 force output file overwrite\n"
"  -h, --help                  display this help and exit\n");
  FUNC_0(VAR_10,
"  -j, --rm                    remove source file(s)\n"
"  -k, --keep                  keep source file(s) (default)\n"
"  -n, --no-copy-stat          do not copy source file(s) attributes\n"
"  -o FILE, --output=FILE      output file (only if 1 input file)\n");
  FUNC_0(VAR_10,
"  -q NUM, --quality=NUM       compression level (%d-%d)\n",
          VAR_3, VAR_1);
  FUNC_0(VAR_10,
"  -t, --test                  test compressed file integrity\n"
"  -v, --verbose               verbose mode\n");
  FUNC_0(VAR_10,
"  -w NUM, --lgwin=NUM         set LZ77 window size (0, %d-%d)\n"
"                              window size = 2**NUM - 16\n"
"                              0 lets compressor choose the optimal value\n",
          VAR_4, VAR_2);
  FUNC_0(VAR_10,
"  --large_window=NUM          use incompatible large-window brotli\n"
"                              bitstream with window size (0, %d-%d)\n"
"                              WARNING: this format is not compatible\n"
"                              with brotli RFC 7932 and may not be\n"
"                              decodable with regular brotli decoders\n",
          VAR_4, VAR_0);
  FUNC_0(VAR_10,
"  -S SUF, --suffix=SUF        output file suffix (default:'%s')\n",
          VAR_5);
  FUNC_0(VAR_10,
"  -V, --version               display version and exit\n"
"  -Z, --best                  use best compression level (11) (default)\n"
"Simple options could be coalesced, i.e. '-9kf' is equivalent to '-9 -k -f'.\n"
"With no FILE, or when FILE is -, read standard input.\n"
"All arguments after '--' are treated as files.\n");
}
