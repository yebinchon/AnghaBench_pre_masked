
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tty_struct {int index; int name; } ;
struct tty_port {int dummy; } ;
struct isi_port {struct tty_port port; } ;
struct isi_board {int status; unsigned int port_count; } ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 struct isi_board* VAR_2 ;
 struct isi_port* VAR_3 ;
 scalar_t__ FUNC_1 (struct isi_port*,int ,char*) ;

__attribute__((used)) static struct tty_port *FUNC_2(struct tty_struct *VAR_4)
{
 struct isi_port *VAR_5;
 struct isi_board *VAR_6;
 unsigned int VAR_7;
 int VAR_8 = VAR_4->index;

 if (VAR_8 < 0 || VAR_8 > VAR_1-1)
  return ((void*)0);
 VAR_7 = FUNC_0(VAR_8);
 VAR_6 = &VAR_2[VAR_7];

 if (!(VAR_6->status & VAR_0))
  return ((void*)0);


 if (VAR_8 > ((VAR_7 * 16) + VAR_6->port_count - 1))
  return ((void*)0);

 VAR_5 = &VAR_3[VAR_8];
 if (FUNC_1(VAR_5, VAR_4->name, "isicom_open"))
  return ((void*)0);

 return &VAR_5->port;
}
