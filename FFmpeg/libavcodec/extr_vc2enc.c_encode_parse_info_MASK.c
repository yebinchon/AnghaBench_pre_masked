
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint32_t ;
typedef enum DiracParseCodes { ____Placeholder_DiracParseCodes } DiracParseCodes ;
struct TYPE_9__ {scalar_t__ buf; } ;
struct TYPE_8__ {int next_parse_offset; int last_parse_code; TYPE_2__ pb; } ;
typedef TYPE_1__ VC2EncContext ;


 int FUNC_0 (scalar_t__,int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*,char*,int ) ;
 int FUNC_3 (TYPE_2__*,int,int) ;
 int FUNC_4 (TYPE_2__*,int) ;
 int FUNC_5 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_6(VC2EncContext *VAR_1, enum DiracParseCodes VAR_2)
{
    uint32_t VAR_3, VAR_4;

    FUNC_1(&VAR_1->pb);

    VAR_3 = FUNC_5(&VAR_1->pb) >> 3;


    FUNC_2(&VAR_1->pb, "BBCD", 0);


    FUNC_3(&VAR_1->pb, 8, VAR_2);


    VAR_4 = VAR_3 - VAR_1->next_parse_offset;
    FUNC_0(VAR_1->pb.buf + VAR_1->next_parse_offset + 5, VAR_4);
    VAR_1->next_parse_offset = VAR_3;
    FUNC_4(&VAR_1->pb, VAR_2 == VAR_0 ? 13 : 0);


    FUNC_4(&VAR_1->pb, VAR_1->last_parse_code == VAR_0 ? 13 : VAR_4);

    VAR_1->last_parse_code = VAR_2;
}
