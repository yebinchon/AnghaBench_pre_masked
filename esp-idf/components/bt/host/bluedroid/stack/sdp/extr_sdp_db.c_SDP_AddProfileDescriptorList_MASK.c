
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int,int ,scalar_t__*) ;
 int VAR_3 ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (scalar_t__*,int ) ;
 int FUNC_3 (scalar_t__*,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_4 (scalar_t__*) ;
 scalar_t__ FUNC_5 (int) ;

BOOLEAN FUNC_6 (UINT32 VAR_8, UINT16 VAR_9,
                                      UINT16 VAR_10)
{

    UINT8 *VAR_11;
    UINT8 *VAR_12;
    BOOLEAN VAR_13;

    if ((VAR_11 = (UINT8 *) FUNC_5(sizeof(UINT8) * VAR_3)) == ((void*)0)) {
        FUNC_1("SDP_AddProfileDescriptorList cannot get a buffer!\n");
        return (VAR_2);
    }
    VAR_12 = VAR_11 + 2;



    FUNC_3 (VAR_12, (VAR_7 << 3) | VAR_5);
    FUNC_2 (VAR_12, VAR_9);

    FUNC_3 (VAR_12, (VAR_6 << 3) | VAR_5);
    FUNC_2 (VAR_12, VAR_10);


    *VAR_11 = (UINT8) ((VAR_1 << 3) | VAR_4);
    *(VAR_11 + 1) = (UINT8) (VAR_12 - (VAR_11 + 2));

    VAR_13 = FUNC_0 (VAR_8, VAR_0, VAR_1, (UINT32) (VAR_12 - VAR_11), VAR_11);
    FUNC_4(VAR_11);
    return VAR_13;




}
