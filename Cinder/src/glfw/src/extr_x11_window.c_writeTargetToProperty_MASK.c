
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int targets ;
typedef int formats ;
struct TYPE_6__ {scalar_t__ property; scalar_t__ target; int requestor; } ;
typedef TYPE_2__ XSelectionRequestEvent ;
struct TYPE_5__ {scalar_t__ const UTF8_STRING; scalar_t__ const COMPOUND_STRING; scalar_t__ TARGETS; scalar_t__ const MULTIPLE; scalar_t__ ATOM_PAIR; scalar_t__ SAVE_TARGETS; scalar_t__ NULL_; scalar_t__ clipboardString; int display; } ;
struct TYPE_7__ {TYPE_1__ x11; } ;
typedef scalar_t__ Atom ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ const VAR_3 ;
 int FUNC_0 (int ,int ,scalar_t__,scalar_t__,int,int ,unsigned char*,unsigned long) ;
 int FUNC_1 (scalar_t__*) ;
 TYPE_4__ VAR_4 ;
 unsigned long FUNC_2 (int ,scalar_t__,scalar_t__,unsigned char**) ;
 unsigned long FUNC_3 (scalar_t__) ;

__attribute__((used)) static Atom FUNC_4(const XSelectionRequestEvent* VAR_5)
{
    int VAR_6;
    const Atom VAR_7[] = { VAR_4.x11.UTF8_STRING,
                             VAR_4.x11.COMPOUND_STRING,
                             VAR_3 };
    const int VAR_8 = sizeof(VAR_7) / sizeof(VAR_7[0]);

    if (VAR_5->property == VAR_0)
    {


        return VAR_0;
    }

    if (VAR_5->target == VAR_4.x11.TARGETS)
    {


        const Atom VAR_9[] = { VAR_4.x11.TARGETS,
                                 VAR_4.x11.MULTIPLE,
                                 VAR_4.x11.UTF8_STRING,
                                 VAR_4.x11.COMPOUND_STRING,
                                 VAR_3 };

        FUNC_0(VAR_4.x11.display,
                        VAR_5->requestor,
                        VAR_5->property,
                        VAR_2,
                        32,
                        VAR_1,
                        (unsigned char*) VAR_9,
                        sizeof(VAR_9) / sizeof(VAR_9[0]));

        return VAR_5->property;
    }

    if (VAR_5->target == VAR_4.x11.MULTIPLE)
    {


        Atom* VAR_10;
        unsigned long VAR_11, VAR_12;

        VAR_12 = FUNC_2(VAR_5->requestor,
                                          VAR_5->property,
                                          VAR_4.x11.ATOM_PAIR,
                                          (unsigned char**) &VAR_10);

        for (VAR_11 = 0; VAR_11 < VAR_12; VAR_11 += 2)
        {
            int VAR_13;

            for (VAR_13 = 0; VAR_13 < VAR_8; VAR_13++)
            {
                if (VAR_10[VAR_11] == VAR_7[VAR_13])
                    break;
            }

            if (VAR_13 < VAR_8)
            {
                FUNC_0(VAR_4.x11.display,
                                VAR_5->requestor,
                                VAR_10[VAR_11 + 1],
                                VAR_10[VAR_11],
                                8,
                                VAR_1,
                                (unsigned char*) VAR_4.x11.clipboardString,
                                FUNC_3(VAR_4.x11.clipboardString));
            }
            else
                VAR_10[VAR_11 + 1] = VAR_0;
        }

        FUNC_0(VAR_4.x11.display,
                        VAR_5->requestor,
                        VAR_5->property,
                        VAR_4.x11.ATOM_PAIR,
                        32,
                        VAR_1,
                        (unsigned char*) VAR_10,
                        VAR_12);

        FUNC_1(VAR_10);

        return VAR_5->property;
    }

    if (VAR_5->target == VAR_4.x11.SAVE_TARGETS)
    {



        FUNC_0(VAR_4.x11.display,
                        VAR_5->requestor,
                        VAR_5->property,
                        VAR_4.x11.NULL_,
                        32,
                        VAR_1,
                        ((void*)0),
                        0);

        return VAR_5->property;
    }



    for (VAR_6 = 0; VAR_6 < VAR_8; VAR_6++)
    {
        if (VAR_5->target == VAR_7[VAR_6])
        {


            FUNC_0(VAR_4.x11.display,
                            VAR_5->requestor,
                            VAR_5->property,
                            VAR_5->target,
                            8,
                            VAR_1,
                            (unsigned char*) VAR_4.x11.clipboardString,
                            FUNC_3(VAR_4.x11.clipboardString));

            return VAR_5->property;
        }
    }



    return VAR_0;
}
