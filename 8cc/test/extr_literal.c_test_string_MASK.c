
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (char*,char*) ;

__attribute__((used)) static void FUNC_2() {
    FUNC_1("abc", "abc");
    FUNC_1("abc", u8"abc");
    FUNC_0('a', "abc"[0]);
    FUNC_0(0, "abc"[3]);
    FUNC_1("abcd", "ab" "cd");
    FUNC_1("abcdef", "ab" "cd" "ef");

    char VAR_0[] = { 65, 97, 7, 8, 12, 10, 13, 9, 11, 27, 7, 15, -99, -1, 18, 0 };
    FUNC_1(VAR_0, "Aa\a\b\f\n\r\t\v\e\7\17\235\xff\x012");
    FUNC_0('c', L'c');
    FUNC_0(0x3042, L'\u3042');
    FUNC_0(0x3042, u'\u3042');
    FUNC_0(0x3042, U'\u3042');


    int VAR_1 = 1, VAR_2 = 2, VAR_3 = 3, VAR_4 = 4;
    FUNC_0(10, VAR_1 + VAR_2 + VAR_3 + VAR_4);
    int VAR_5 = 1, VAR_6 = 2, VAR_7 = 3, VAR_8 = 4;
    FUNC_0(10, VAR_5 + VAR_6 + VAR_7 + VAR_8);
}
