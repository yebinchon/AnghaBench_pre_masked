
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (char*,...) ;
 int FUNC_7 (char*,int*) ;
 int FUNC_8 (char*,char*,int,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_9 (int,int ) ;

int FUNC_10 (int VAR_3, char *VAR_4[])
{
  unsigned int VAR_5[0x100000];
  int VAR_6[0x110000];
  int VAR_7;

  if (VAR_3 != 1)
    FUNC_1(1);

  FUNC_6("/*\n");
  FUNC_6(" * Copyright (C) 1999-2003 Free Software Foundation, Inc.\n");
  FUNC_6(" * This file is part of the GNU LIBICONV Library.\n");
  FUNC_6(" *\n");
  FUNC_6(" * The GNU LIBICONV Library is free software; you can redistribute it\n");
  FUNC_6(" * and/or modify it under the terms of the GNU Library General Public\n");
  FUNC_6(" * License as published by the Free Software Foundation; either version 2\n");
  FUNC_6(" * of the License, or (at your option) any later version.\n");
  FUNC_6(" *\n");
  FUNC_6(" * The GNU LIBICONV Library is distributed in the hope that it will be\n");
  FUNC_6(" * useful, but WITHOUT ANY WARRANTY; without even the implied warranty of\n");
  FUNC_6(" * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU\n");
  FUNC_6(" * Library General Public License for more details.\n");
  FUNC_6(" *\n");
  FUNC_6(" * You should have received a copy of the GNU Library General Public\n");
  FUNC_6(" * License along with the GNU LIBICONV Library; see the file COPYING.LIB.\n");
  FUNC_6(" * If not, write to the Free Software Foundation, Inc., 51 Franklin Street,\n");
  FUNC_6(" * Fifth Floor, Boston, MA 02110-1301, USA.\n");
  FUNC_6(" */\n");
  FUNC_6("\n");
  FUNC_6("/*\n");
  FUNC_6(" * Transliteration table\n");
  FUNC_6(" */\n");
  FUNC_6("\n");
  {
    int VAR_8;
    int VAR_9;
    for (VAR_9 = 0; VAR_9 < 0x110000; VAR_9++)
      VAR_6[VAR_9] = -1;
    VAR_7 = 0;
    for (;;) {
      VAR_8 = FUNC_4(VAR_1);
      if (VAR_8 == VAR_0)
        break;
      if (VAR_8 == '#') {
        do { VAR_8 = FUNC_4(VAR_1); } while (!(VAR_8 == VAR_0 || VAR_8 == '\n'));
        continue;
      }
      FUNC_9(VAR_8,VAR_1);
      if (FUNC_7("%x",&VAR_9) != 1)
        FUNC_1(1);
      VAR_8 = FUNC_4(VAR_1);
      if (VAR_8 != '\t')
        FUNC_1(1);
      for (;;) {
        VAR_8 = FUNC_4(VAR_1);
        if (VAR_8 == VAR_0 || VAR_8 == '\n')
          FUNC_1(1);
        if (VAR_8 == '\t')
          break;
        if (VAR_6[VAR_9] < 0) {
          VAR_6[VAR_9] = VAR_7;
          VAR_5[VAR_7++] = 0;
        }
        if (VAR_8 >= 0x80) {

          if (VAR_8 < 0xc0)
            FUNC_1(1);
          else {
            unsigned int VAR_10 = (VAR_8 < 0xe0 ? 2 : VAR_8 < 0xf0 ? 3 : VAR_8 < 0xf8 ? 4 : VAR_8 < 0xfc ? 5 : 6);
            VAR_8 &= (1 << (8-VAR_10)) - 1;
            while (--VAR_10 > 0) {
              int VAR_11 = FUNC_4(VAR_1);
              if (!(VAR_11 >= 0x80 && VAR_11 < 0xc0))
                FUNC_1(1);
              VAR_8 <<= 6; VAR_8 |= (VAR_11 & 0x3f);
            }
          }
        }
        VAR_5[VAR_7++] = (unsigned int) VAR_8;
      }
      if (VAR_6[VAR_9] >= 0)
        VAR_5[VAR_6[VAR_9]] = VAR_7 - VAR_6[VAR_9] - 1;
      do { VAR_8 = FUNC_4(VAR_1); } while (!(VAR_8 == VAR_0 || VAR_8 == '\n'));
    }
  }
  FUNC_6("static const unsigned int translit_data[%d] = {",VAR_7);
  {
    int VAR_12;
    for (VAR_12 = 0; VAR_12 < VAR_7; VAR_12++) {
      if (VAR_5[VAR_12] < 32)
        FUNC_6("\n %3d,",VAR_5[VAR_12]);
      else if (VAR_5[VAR_12] == '\'')
        FUNC_6("'\\'',");
      else if (VAR_5[VAR_12] == '\\')
        FUNC_6("'\\\\',");
      else if (VAR_5[VAR_12] < 127)
        FUNC_6(" '%c',",VAR_5[VAR_12]);
      else if (VAR_5[VAR_12] < 256)
        FUNC_6("0x%02X,",VAR_5[VAR_12]);
      else
        FUNC_6("0x%04X,",VAR_5[VAR_12]);
    }
    FUNC_6("\n};\n");
  }
  FUNC_6("\n");
  {
    bool VAR_13[0x1100];
    int VAR_14[0x22000];
    int VAR_15;
    struct { int minline; int maxline; int usecount; const char* suffix; } VAR_16[0x2000];
    int VAR_17, VAR_18, VAR_19, VAR_20, VAR_21, VAR_22;

    for (VAR_19 = 0; VAR_19 < 0x1100; VAR_19++)
      VAR_13[VAR_19] = 0;
    for (VAR_18 = 0; VAR_18 < 0x110000; VAR_18++)
      if (VAR_6[VAR_18] >= 0)
        VAR_13[VAR_18>>8] = 1;
    for (VAR_20 = 0; VAR_20 < 0x22000; VAR_20++) {
      bool VAR_23 = 1;
      for (VAR_21 = 0; VAR_21 < 8; VAR_21++) {
        VAR_18 = 8*VAR_20+VAR_21;
        if (VAR_6[VAR_18] >= 0)
          VAR_23 = 0;
      }
      if (VAR_23)
        VAR_14[VAR_20] = -1;
      else
        VAR_14[VAR_20] = 0;
    }
    VAR_15 = 0;
    for (VAR_20 = 0; VAR_20 < 0x22000; VAR_20++) {
      if (VAR_14[VAR_20] >= 0) {
        if (VAR_15 > 0
            && ((VAR_20 > 0 && VAR_14[VAR_20-1] == VAR_15-1)
                || ((VAR_16[VAR_15-1].maxline >> 5) == (VAR_20 >> 5)
                    && VAR_20 - VAR_16[VAR_15-1].maxline <= 8))) {
          VAR_14[VAR_20] = VAR_15-1;
          VAR_16[VAR_15-1].maxline = VAR_20;
        } else {
          VAR_15++;
          VAR_14[VAR_20] = VAR_15-1;
          VAR_16[VAR_15-1].minline = VAR_16[VAR_15-1].maxline = VAR_20;
        }
      }
    }
    for (VAR_22 = 0; VAR_22 < VAR_15; VAR_22++) {
      VAR_16[VAR_22].usecount = 0;
      VAR_20 = 8*VAR_16[VAR_22].minline;
      VAR_21 = 8*(VAR_16[VAR_22].maxline+1);
      for (VAR_18 = VAR_20; VAR_18 < VAR_21; VAR_18++)
        if (VAR_6[VAR_18] >= 0)
          VAR_16[VAR_22].usecount++;
    }
    for (VAR_22 = 0, VAR_19 = -1, VAR_17 = 0; VAR_22 < VAR_15; VAR_22++) {
      if (VAR_16[VAR_22].usecount > 1) {
        char* VAR_24;
        if (VAR_19 == VAR_16[VAR_22].minline >> 5) {
          VAR_24 = (char*) FUNC_5(5+1);
          FUNC_8(VAR_24, "%02x_%d", VAR_19, ++VAR_17);
        } else {
          VAR_19 = VAR_16[VAR_22].minline >> 5;
          VAR_24 = (char*) FUNC_5(2+1);
          FUNC_8(VAR_24, "%02x", VAR_19);
        }
        VAR_16[VAR_22].suffix = VAR_24;
      } else
        VAR_16[VAR_22].suffix = ((void*)0);
    }
    {
      VAR_19 = -1;
      for (VAR_22 = 0; VAR_22 < VAR_15; VAR_22++)
        if (VAR_16[VAR_22].usecount > 1) {
          VAR_19 = 0;
          FUNC_6("static const short translit_page%s[%d] = {\n", VAR_16[VAR_22].suffix, 8*(VAR_16[VAR_22].maxline-VAR_16[VAR_22].minline+1));
          for (VAR_20 = VAR_16[VAR_22].minline; VAR_20 <= VAR_16[VAR_22].maxline; VAR_20++) {
            if ((VAR_20 % 0x20) == 0 && VAR_20 > VAR_16[VAR_22].minline)
              FUNC_6("  /* 0x%04x */\n", 8*VAR_20);
            FUNC_6(" ");
            for (VAR_21 = 0; VAR_21 < 8; VAR_21++) {
              VAR_18 = 8*VAR_20+VAR_21;
              FUNC_6(" %4d,", VAR_6[VAR_18]);
            }
            FUNC_6(" /* 0x%02x-0x%02x */\n", 8*(VAR_20 % 0x20), 8*(VAR_20 % 0x20)+7);
          }
          FUNC_6("};\n");
        }
      if (VAR_19 >= 0)
        FUNC_6("\n");
    }
    FUNC_6("#define translit_index(wc) \\\n  (");
    for (VAR_20 = 0; VAR_20 < 0x22000;) {
      VAR_22 = VAR_14[VAR_20];
      for (VAR_21 = VAR_20; VAR_21 < 0x22000 && VAR_14[VAR_21] == VAR_22; VAR_21++);
      if (VAR_22 >= 0) {
        if (VAR_20 != VAR_16[VAR_22].minline) FUNC_0();
        if (VAR_21 > VAR_16[VAR_22].maxline+1) FUNC_0();
        VAR_21 = VAR_16[VAR_22].maxline+1;
      }
      if (VAR_22 == -1) {
      } else {
        if (VAR_22 >= 0 && VAR_16[VAR_22].usecount == 0) FUNC_0();
        if (VAR_22 >= 0 && VAR_16[VAR_22].usecount == 1) {
          if (VAR_21 != VAR_20+1) FUNC_0();
          for (VAR_18 = 8*VAR_20; VAR_18 < 8*VAR_21; VAR_18++)
            if (VAR_6[VAR_18] >= 0) {
              FUNC_6("wc == 0x%04x ? %d", VAR_18, VAR_6[VAR_18]);
              break;
            }
        } else {
          if (VAR_20 == 0) {
            FUNC_6("wc < 0x%04x", 8*VAR_21);
          } else {
            FUNC_6("wc >= 0x%04x && wc < 0x%04x", 8*VAR_20, 8*VAR_21);
          }
          FUNC_6(" ? translit_page%s[wc", VAR_16[VAR_22].suffix);
          if (VAR_16[VAR_22].minline > 0)
            FUNC_6("-0x%04x", 8*VAR_20);
          FUNC_6("]");
        }
        FUNC_6(" : \\\n   ");
      }
      VAR_20 = VAR_21;
    }
    FUNC_6("-1)\n");
  }

  if (FUNC_3(VAR_2) || FUNC_2(VAR_2))
    FUNC_1(1);
  FUNC_1(0);
}
