
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 char** VAR_0 ;
 char** VAR_1 ;
 int FUNC_0 (int *,char*,...) ;

__attribute__((used)) static void
  FUNC_1( FILE* VAR_2,
         char* VAR_3 )
  {
    char** VAR_4 = VAR_0;
    char** VAR_5 = VAR_1;


    FUNC_0( VAR_2, "%s [options] -- Generate random erroneous fonts\n"
                  "  and attempt to parse them with FreeType.\n\n", VAR_3 );

    FUNC_0( VAR_2, "  --all                    All non-directory files are assumed to be fonts.\n" );
    FUNC_0( VAR_2, "  --check-outlines         Make sure we can parse the outlines of each glyph.\n" );
    FUNC_0( VAR_2, "  --dir <path>             Append <path> to list of font search directories\n"
                  "                           (no recursive search).\n" );
    FUNC_0( VAR_2, "  --error-count <cnt>      Introduce <cnt> single byte errors into each font\n"
                  "                           (default: 1)\n" );
    FUNC_0( VAR_2, "  --error-fraction <frac>  Introduce <frac>*filesize single byte errors\n"
                  "                           into each font (default: 0.0).\n" );
    FUNC_0( VAR_2, "  --ext <ext>              Add <ext> to list of extensions indicating fonts.\n" );
    FUNC_0( VAR_2, "  --help                   Print this.\n" );
    FUNC_0( VAR_2, "  --nohints                Turn off hinting.\n" );
    FUNC_0( VAR_2, "  --rasterize              Attempt to rasterize each glyph.\n" );
    FUNC_0( VAR_2, "  --results <path>         Place the created test fonts into <path>\n"
                  "                           (default: `results')\n" );
    FUNC_0( VAR_2, "  --size <float>           Use the given font size for the tests.\n" );
    FUNC_0( VAR_2, "  --test <file>            Run a single test on an already existing file.\n" );
    FUNC_0( VAR_2, "\n" );

    FUNC_0( VAR_2, "Default font extensions:\n" );
    FUNC_0( VAR_2, " " );
    while ( *VAR_5 )
      FUNC_0( VAR_2, " .%s", *VAR_5++ );
    FUNC_0( VAR_2, "\n" );

    FUNC_0( VAR_2, "Default font directories:\n" );
    FUNC_0( VAR_2, " " );
    while ( *VAR_4 )
      FUNC_0( VAR_2, " %s", *VAR_4++ );
    FUNC_0( VAR_2, "\n" );
  }
