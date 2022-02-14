
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int biCompression; } ;
typedef TYPE_1__ BITMAPINFOHEADER ;
typedef int AVFormatContext ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int *,TYPE_1__*,int ,char*) ;

__attribute__((used)) static void FUNC_2(AVFormatContext *VAR_12, BITMAPINFOHEADER *VAR_13)
{
    FUNC_0(VAR_12, VAR_0, "BITMAPINFOHEADER\n");
    FUNC_1(VAR_12, VAR_13, VAR_7, "lu");
    FUNC_1(VAR_12, VAR_13, VAR_9, "ld");
    FUNC_1(VAR_12, VAR_13, VAR_5, "ld");
    FUNC_1(VAR_12, VAR_13, VAR_6, "d");
    FUNC_1(VAR_12, VAR_13, VAR_1, "d");
    FUNC_1(VAR_12, VAR_13, VAR_4, "lu");
    FUNC_0(VAR_12, VAR_0, "    biCompression:\t\"%.4s\"\n",
                   (char*) &VAR_13->biCompression);
    FUNC_1(VAR_12, VAR_13, VAR_8, "lu");
    FUNC_1(VAR_12, VAR_13, VAR_10, "lu");
    FUNC_1(VAR_12, VAR_13, VAR_11, "lu");
    FUNC_1(VAR_12, VAR_13, VAR_3, "lu");
    FUNC_1(VAR_12, VAR_13, VAR_2, "lu");
}
