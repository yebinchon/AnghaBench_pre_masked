
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ beg; scalar_t__ end; int label; } ;
typedef int Node ;
typedef TYPE_1__ Case ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ,int *,int *) ;
 int * FUNC_1 (int *,int ,int *) ;
 int * FUNC_2 (int ,scalar_t__) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;

__attribute__((used)) static Node *FUNC_4(Node *VAR_4, Case *VAR_5) {
    Node *VAR_6;
    if (VAR_5->beg == VAR_5->end) {
        VAR_6 = FUNC_0(VAR_3, VAR_0, VAR_4, FUNC_2(VAR_3, VAR_5->beg));
    } else {

        Node *VAR_7 = FUNC_0(VAR_3, VAR_1, FUNC_2(VAR_3, VAR_5->beg), VAR_4);
        Node *VAR_8 = FUNC_0(VAR_3, VAR_1, VAR_4, FUNC_2(VAR_3, VAR_5->end));
        VAR_6 = FUNC_0(VAR_3, VAR_2, VAR_7, VAR_8);
    }
    return FUNC_1(VAR_6, FUNC_3(VAR_5->label), ((void*)0));
}
