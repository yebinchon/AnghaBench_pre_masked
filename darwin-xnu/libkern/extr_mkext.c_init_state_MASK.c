
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct encode_state {char* text_buf; void** parent; void** rchild; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (struct encode_state*,int) ;

__attribute__((used)) static void FUNC_1(struct encode_state *VAR_3)
{
    int VAR_4;

    FUNC_0(VAR_3, sizeof(*VAR_3));

    for (VAR_4 = 0; VAR_4 < VAR_1 - VAR_0; VAR_4++)
        VAR_3->text_buf[VAR_4] = ' ';
    for (VAR_4 = VAR_1 + 1; VAR_4 <= VAR_1 + 256; VAR_4++)
        VAR_3->rchild[VAR_4] = VAR_2;
    for (VAR_4 = 0; VAR_4 < VAR_1; VAR_4++)
        VAR_3->parent[VAR_4] = VAR_2;
}
