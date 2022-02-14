
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int buf; } ;
struct TYPE_6__ {TYPE_3__ pb; } ;
typedef TYPE_1__ FlacEncodeContext ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*,int,int) ;
 int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_6(FlacEncodeContext *VAR_1)
{
    int VAR_2;
    FUNC_3(&VAR_1->pb);
    VAR_2 = FUNC_0(FUNC_1(FUNC_2(VAR_0), 0, VAR_1->pb.buf,
                            FUNC_5(&VAR_1->pb)>>3));
    FUNC_4(&VAR_1->pb, 16, VAR_2);
    FUNC_3(&VAR_1->pb);
}
