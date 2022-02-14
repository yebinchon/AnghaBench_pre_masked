
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_umad_packet {int list; } ;
struct ib_umad_file {int send_lock; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct ib_umad_file *VAR_0,
    struct ib_umad_packet *VAR_1)
{
 FUNC_1(&VAR_0->send_lock);
 FUNC_0(&VAR_1->list);
 FUNC_2(&VAR_0->send_lock);
}
