
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* key; char* value; } ;
typedef TYPE_1__ AVDictionaryEntry ;
typedef int AVDictionary ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int **) ;
 TYPE_1__* FUNC_1 (int *,char*,TYPE_1__*,int ) ;
 int FUNC_2 (int *,char**,char,char) ;
 int FUNC_3 (int **,char*,char*,int) ;
 int FUNC_4 (int **,char*,int,int) ;
 int FUNC_5 (char**) ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int *,char,char) ;

int FUNC_9(void)
{
    AVDictionary *VAR_5 = ((void*)0);
    AVDictionaryEntry *VAR_6;
    char *VAR_7 = ((void*)0);

    FUNC_7("Testing av_dict_get_string() and av_dict_parse_string()\n");
    FUNC_2(VAR_5, &VAR_7, '=', ',');
    FUNC_7("%s\n", VAR_7);
    FUNC_5(&VAR_7);
    FUNC_3(&VAR_5, "aaa", "aaa", 0);
    FUNC_3(&VAR_5, "b,b", "bbb", 0);
    FUNC_3(&VAR_5, "c=c", "ccc", 0);
    FUNC_3(&VAR_5, "ddd", "d,d", 0);
    FUNC_3(&VAR_5, "eee", "e=e", 0);
    FUNC_3(&VAR_5, "f,f", "f=f", 0);
    FUNC_3(&VAR_5, "g=g", "g,g", 0);
    FUNC_8(VAR_5, ',', '=');
    FUNC_0(&VAR_5);
    FUNC_3(&VAR_5, "aaa", "aaa", 0);
    FUNC_3(&VAR_5, "bbb", "bbb", 0);
    FUNC_3(&VAR_5, "ccc", "ccc", 0);
    FUNC_3(&VAR_5, "\\,=\'\"", "\\,=\'\"", 0);
    FUNC_8(VAR_5, '"', '=');
    FUNC_8(VAR_5, '\'', '=');
    FUNC_8(VAR_5, ',', '"');
    FUNC_8(VAR_5, ',', '\'');
    FUNC_8(VAR_5, '\'', '"');
    FUNC_8(VAR_5, '"', '\'');
    FUNC_0(&VAR_5);

    FUNC_7("\nTesting av_dict_set()\n");
    FUNC_3(&VAR_5, "a", "a", 0);
    FUNC_3(&VAR_5, "b", FUNC_6("b"), VAR_3);
    FUNC_3(&VAR_5, FUNC_6("c"), "c", VAR_2);
    FUNC_3(&VAR_5, FUNC_6("d"), FUNC_6("d"), VAR_2 | VAR_3);
    FUNC_3(&VAR_5, "e", "e", VAR_1);
    FUNC_3(&VAR_5, "e", "f", VAR_1);
    FUNC_3(&VAR_5, "f", "f", 0);
    FUNC_3(&VAR_5, "f", ((void*)0), 0);
    FUNC_3(&VAR_5, "ff", "f", 0);
    FUNC_3(&VAR_5, "ff", "f", VAR_0);
    VAR_6 = ((void*)0);
    while ((VAR_6 = FUNC_1(VAR_5, "", VAR_6, VAR_4)))
        FUNC_7("%s %s\n", VAR_6->key, VAR_6->value);
    FUNC_0(&VAR_5);

    FUNC_3(&VAR_5, ((void*)0), "a", 0);
    FUNC_3(&VAR_5, ((void*)0), "b", 0);
    FUNC_1(VAR_5, ((void*)0), ((void*)0), 0);
    VAR_6 = ((void*)0);
    while ((VAR_6 = FUNC_1(VAR_5, "", VAR_6, VAR_4)))
        FUNC_7("'%s' '%s'\n", VAR_6->key, VAR_6->value);
    FUNC_0(&VAR_5);



    FUNC_7("\nTesting av_dict_set_int()\n");
    FUNC_4(&VAR_5, "1", 1, VAR_3);
    FUNC_4(&VAR_5, FUNC_6("2"), 2, VAR_2);
    FUNC_4(&VAR_5, FUNC_6("3"), 3, VAR_2 | VAR_3);
    FUNC_4(&VAR_5, "4", 4, 0);
    FUNC_4(&VAR_5, "5", 5, VAR_1);
    FUNC_4(&VAR_5, "5", 6, VAR_1);
    FUNC_4(&VAR_5, "12", 1, 0);
    FUNC_4(&VAR_5, "12", 2, VAR_0);
    VAR_6 = ((void*)0);
    while ((VAR_6 = FUNC_1(VAR_5, "", VAR_6, VAR_4)))
        FUNC_7("%s %s\n", VAR_6->key, VAR_6->value);
    FUNC_0(&VAR_5);


    FUNC_7("\nTesting av_dict_set() with existing AVDictionaryEntry.key as key\n");
    FUNC_3(&VAR_5, "key", "old", 0);
    VAR_6 = FUNC_1(VAR_5, "key", ((void*)0), 0);
    FUNC_3(&VAR_5, VAR_6->key, "new val OK", 0);
    VAR_6 = FUNC_1(VAR_5, "key", ((void*)0), 0);
    FUNC_7("%s\n", VAR_6->value);
    FUNC_3(&VAR_5, VAR_6->key, VAR_6->value, 0);
    VAR_6 = FUNC_1(VAR_5, "key", ((void*)0), 0);
    FUNC_7("%s\n", VAR_6->value);
    FUNC_0(&VAR_5);

    return 0;
}
