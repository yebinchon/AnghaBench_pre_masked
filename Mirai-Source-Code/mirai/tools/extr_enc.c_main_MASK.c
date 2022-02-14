
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;


 scalar_t__ FUNC_0 (char*) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,...) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 int FUNC_7 (char*) ;
 void* FUNC_8 (void*,int) ;

int FUNC_9(int VAR_0, char **VAR_1)
{
    void *VAR_2;
    int VAR_3, VAR_4;

    if (VAR_0 != 3)
    {
        FUNC_5("Usage: %s <string | ip | uint32 | uint16 | uint8 | bool> <data>\n", VAR_1[0]);
        return 0;
    }

    if (FUNC_6(VAR_1[1], "string") == 0)
    {
        VAR_2 = VAR_1[2];
        VAR_3 = FUNC_7(VAR_1[2]) + 1;
    }
    else if (FUNC_6(VAR_1[1], "ip") == 0)
    {
        VAR_2 = FUNC_1(1, sizeof (uint32_t));
        *((uint32_t *)VAR_2) = FUNC_4(VAR_1[2]);
        VAR_3 = sizeof (uint32_t);
    }
    else if (FUNC_6(VAR_1[1], "uint32") == 0)
    {
        VAR_2 = FUNC_1(1, sizeof (uint32_t));
        *((uint32_t *)VAR_2) = FUNC_2((uint32_t)FUNC_0(VAR_1[2]));
        VAR_3 = sizeof (uint32_t);
    }
    else if (FUNC_6(VAR_1[1], "uint16") == 0)
    {
        VAR_2 = FUNC_1(1, sizeof (uint16_t));
        *((uint16_t *)VAR_2) = FUNC_3((uint16_t)FUNC_0(VAR_1[2]));
        VAR_3 = sizeof (uint16_t);
    }
    else if (FUNC_6(VAR_1[1], "uint8") == 0)
    {
        VAR_2 = FUNC_1(1, sizeof (uint8_t));
        *((uint8_t *)VAR_2) = FUNC_0(VAR_1[2]);
        VAR_3 = sizeof (uint8_t);
    }
    else if (FUNC_6(VAR_1[1], "bool") == 0)
    {
        VAR_2 = FUNC_1(1, sizeof (char));
        if (FUNC_6(VAR_1[2], "false") == 0)
            ((char *)VAR_2)[0] = 0;
        else if (FUNC_6(VAR_1[2], "true") == 0)
            ((char *)VAR_2)[0] = 1;
        else
        {
            FUNC_5("Unknown value `%s` for datatype bool!\n", VAR_1[2]);
            return -1;
        }
        VAR_3 = sizeof (char);
    }
    else
    {
        FUNC_5("Unknown data type `%s`!\n", VAR_1[1]);
        return -1;
    }



    FUNC_5("XOR'ing %d bytes of data...\n", VAR_3);
    VAR_2 = FUNC_8(VAR_2, VAR_3);
    for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++)
        FUNC_5("\\x%02X", ((unsigned char *)VAR_2)[VAR_4]);
    FUNC_5("\n");
}
